class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
      return subcnt(nums,k)-subcnt(nums,k-1);  
    }
    int subcnt(vector<int>&nums,int k)
    {
        if(k<0) return 0;
        int r=0;
        int l=0;
        int sum=0;
        int cnt=0;
        int n=nums.size();
        while(r<n)
        {
            if(nums[r]%2==0)
            sum+=0;
            if(nums[r]%2==1)
            sum+=1;
            while(sum>k)
            {
                if(nums[l]%2==0)
                {
                    sum-=0;
                }
                if(nums[l]%2==1)
                sum-=1;
                l=l+1;
            }
            cnt=cnt+(r-l+1);
            r=r+1;
        }
        return cnt;
    }
};