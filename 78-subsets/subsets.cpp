class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>sub;
        createsub(nums,0,ans,sub);
        return ans;
    }
    void createsub(vector<int>& nums,int index,vector<vector<int>>& ans,vector<int>& sub)
    {
        if(index==nums.size())
        {
            ans.push_back(sub);
            return;
        }
        sub.push_back(nums[index]);
        createsub(nums,index+1,ans,sub);
        sub.pop_back();
        createsub(nums,index+1,ans,sub);
    }
};