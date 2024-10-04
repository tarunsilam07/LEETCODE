class Solution {
public:
    int maxOperations(vector<int>& nums, int target) {
        int n=nums.size();
        int cnt=0;
        int low=0;
        int high=n-1;
        sort(nums.begin(),nums.end());
        while(low<high){
            int sum=nums[low]+nums[high];
            if(sum==target){
                cnt++;
                low++;
                high--;
            }
            else if(sum<target)
            low++;
            else high--;
        }
        return cnt;
    }
};