class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
         vector<int>ans;
        map<int,int>mpp;
        for(int i=0;i<arr1.size();i++)
        {
            mpp[arr1[i]]++;
        }
      for(auto it:arr2)
      {
        while(mpp[it]--)
        {
            ans.push_back(it);
        }
      }
     for(auto it:mpp)
     {
        while(it.second>0 && it.second--)
        {
            ans.push_back(it.first);
        }
     }
     return ans;
    }
};