class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int xorSum = 0;
        for (int num : nums) {
            xorSum |= num;
        }
        int n = nums.size();
        return xorSum * (1 << (n - 1));
    }
};
