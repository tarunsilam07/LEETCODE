class Solution {
public:
    void fun(int index,vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds)
    {
        if(index==nums.size())
        {
            ans.push_back(nums);
            return ;
        }
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[i],nums[index]);
            fun(index+1,nums,ans,ds);
            swap(nums[i],nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
vector<int>ds;
        vector<vector<int>>ans;
        fun(0,nums,ans,ds);
        return ans;
    }
};