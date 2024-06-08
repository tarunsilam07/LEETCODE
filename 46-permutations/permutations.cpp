class Solution {
public:
    void fun(vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds,int f[])
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!f[i])
            {
                ds.push_back(nums[i]);
                f[i]=1;
                fun(nums,ans,ds,f);
                f[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        int f[n];
        for(int i=0;i<n;i++)
        {
            f[i]=0;
        }
        vector<int>ds;
        vector<vector<int>>ans;
        fun(nums,ans,ds,f);
        return ans;

    }
};