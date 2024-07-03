class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<=3) return 0;
        int n=nums.size()-1;
        int mini=INT_MAX;
        if((nums[n]-nums[3])<mini) mini=(nums[n]-nums[3]);
        if((nums[n-3]-nums[0])<mini) mini=nums[n-3]-nums[0];
        if((nums[n-1]-nums[2])<mini) mini=(nums[n-1]-nums[2]);
        if((nums[n-2]-nums[1])<mini) mini=(nums[n-2]-nums[1]);
        return mini;
    }
};