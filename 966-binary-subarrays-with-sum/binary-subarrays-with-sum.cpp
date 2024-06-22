class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       return countsub(nums,goal)-countsub(nums,goal-1);
    }
    int countsub(vector<int>&nums,int goal)
    {
        if(goal<0) return 0;
        int l=0;
        int r=0;
        int sum=0;
        int cnt=0;
        int n=nums.size();
        while(r<n)
        {
            sum=sum+nums[r];
            while(sum>goal)
            {
                sum=sum-nums[l];
                l=l+1;
            }
            cnt=cnt+(r-l+1);
            r+=1;
        }
        return cnt;
    }
};