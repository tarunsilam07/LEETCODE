class Solution {
public:
    void combo(vector<int>&arr,int target,int index,vector<vector<int>>&ans,vector<int>ds)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=index;i<arr.size();i++)
        {
            if(i>index &&arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;
            ds.push_back(arr[i]);
            combo(arr,target-arr[i],i+1,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
       sort(arr.begin(),arr.end());
       vector<vector<int>>ans;
       vector<int>ds;
       combo(arr,target,0,ans,ds);
       return ans;

    }
};