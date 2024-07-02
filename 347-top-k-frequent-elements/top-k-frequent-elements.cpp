class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        vector<int>ans;
        int i=0;
        while(i<k)
        {
            int index=-1;
            int larger=-1;
            for(auto it:mpp)
            {
                if(it.second>index)
                {
                    index=it.second;
                    larger=it.first;
                }
            }
            ans.push_back(larger);
            mpp.erase(larger);
            i++;
        }
        return ans;
    }
};