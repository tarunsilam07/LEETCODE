class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();
        int tar = 0;
        for (int i = 0; i < n; i++) {
            tar |= nums[i];
        }
        int cnt = 0;
        int totalSubsets = 1 << n; 
        for (int i = 0; i < totalSubsets; i++) {
            int currOr = 0;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    currOr |= nums[j];
                }
            }
            if (currOr == tar) {
                cnt++;
            }
        }
        
        return cnt;
    }
};
