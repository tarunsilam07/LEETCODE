class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
      int rsum=0;
      int lsum=0;
      int n=nums.size();
      int maxi=0;
      for(int i=0;i<=k-1;i++)
      {
        lsum=lsum+nums[i];
      }  
      maxi=lsum;
      int rindex=n-1;
      for(int i=k-1;i>=0;i--)
      {
        lsum=lsum-nums[i];
        rsum=rsum+nums[rindex];
        maxi=max(maxi,lsum+rsum);
        rindex--;
      }
      return maxi;
    }
};