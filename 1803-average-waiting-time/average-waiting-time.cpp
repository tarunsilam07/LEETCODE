class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& nums) {
       long long average=0;
       long long sum=0;
       for(int i=0;i<nums.size();i++)
       {
        if(sum<nums[i][0])
        {
            sum=nums[i][0];
        }
        sum+=nums[i][1];
        average+=sum-nums[i][0];
       }
       return average/double(nums.size());
    }
};