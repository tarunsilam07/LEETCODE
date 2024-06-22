class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int r=0;
        int l=0;
        int mul=1;
        int cnt=0;
        int n=nums.size();
        while(r<n)
        {
            mul=mul*nums[r];
            while(mul>=k)
            {
                mul=mul/nums[l];
                l=l+1;
            }
            cnt=cnt+(r-l+1);
            r=r+1;
        }
        return cnt;
    }
};