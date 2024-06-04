class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      vector<int>vec;
      vector<int>vec1;
      int n=nums.size();
      for(int i=0;i<n;i++)
      {
        if(nums[i]==0)
        {
            vec.push_back(nums[i]);
        }
        else vec1.push_back(nums[i]);
      } 
      nums.clear();
      for(int i=0;i<vec1.size();i++)
      {
        nums.push_back(vec1[i]);
      }
      for(int i=0;i<vec.size();i++)
      {
        nums.push_back(vec[i]);
      }
        
    }
};