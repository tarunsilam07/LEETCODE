class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       set<int>st;
       for(int i=0;i<nums.size();i++)
       {
        st.insert(nums[i]);
       }
      vector<int>ans;
      int i=0;
      int m=st.size();
      for(auto it:st)
      {
        ans.push_back(it);
      }
      nums.clear();
      nums=ans;
      return m;
    }
};