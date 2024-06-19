class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
      return subs(nums,k)-subs(nums,k-1); 
    }
    int subs(vector<int>&nums,int k)
    {
        int l=0;
        int r=0;
        unordered_map<int,int>mpp;
        int n=nums.size();
        int cnt=0;
        while(r<n)
        {
            mpp[nums[r]]++;
            while(mpp.size()>k)
            {
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0)
                {
                    mpp.erase(nums[l]);
                }
                l++;
            }
            cnt+=r-l+1;
            r++;
        }
        return cnt;
    }
};