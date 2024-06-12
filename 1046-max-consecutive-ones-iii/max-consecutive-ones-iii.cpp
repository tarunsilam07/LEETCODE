class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int i=0;
      int j=0;
      int cnt=0;
      int n=nums.size();
      int maxi=INT_MIN;
        while(j<n)
        {
           if(nums[j]==0)
           {
            cnt++;
           }
           if(cnt>k)
           {
            if(nums[i]==0)
            {
                cnt--;
            }
            i++;
           }
           maxi=max(j-i+1,maxi);
           j++;
        }
        return maxi;
    }
};