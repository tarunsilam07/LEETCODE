class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      unordered_map<int,int>mpp;
      for(auto x:nums)
      mpp[x]++;
      int i=1;
      while(true){
        if(mpp.find(i)!=mpp.end())
        i++;
        else break;
      }
      return i;  
    }
};