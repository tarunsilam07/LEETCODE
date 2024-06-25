class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int right=0;
        int mini=INT_MAX;
        long long sum=0;
       for(right=0;right<nums.size();right++)
       {
        sum+=nums[right];
        while(sum>=target)
        {
            mini=min(mini,right-left+1);
            sum-=nums[left];
            left=left+1;
        }
       }
        if(mini==INT_MAX)
        {
            mini=0;
        }
        return mini;
    }
};