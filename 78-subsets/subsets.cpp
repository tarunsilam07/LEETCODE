class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        int n=nums.size();
        int s=1<<n;
        vector<vector<int>>ans;
        for(int num=0;num<s;num++)
        {
            vector<int>vec={};
            for(int i=0;i<n;i++)
            {
                if((num&(1<<i))!=0)
                {
                    vec.push_back(nums[i]);
                }
            }
            ans.push_back(vec);
        }
        return ans;
    }
};