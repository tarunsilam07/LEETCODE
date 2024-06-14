class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int cnt=0;
      for(int i=1;i<nums.size();i++)
      {
        if(nums[i]<=nums[i-1])
        {
            int x=nums[i-1]+1;
            cnt=cnt+x-nums[i];
            nums[i]=x;
        }
      }  
      return cnt;
    }
};