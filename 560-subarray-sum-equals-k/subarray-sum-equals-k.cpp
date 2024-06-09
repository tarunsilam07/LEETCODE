class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       map<int,int>mpp;
       mpp[0]=1;
       int prefix=0;
       int cnt=0;
      for(int i=0;i<nums.size();i++)
      {
        prefix+=nums[i];
        int a=prefix-k;
        cnt+=mpp[a];
        mpp[prefix]++;
      }
      return cnt;
    }
};