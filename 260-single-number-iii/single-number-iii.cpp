class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mpp;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        mpp[nums[i]]++;
    }
    vector<int>lalli;
    for(auto it:mpp)
    {
        if(it.second==1)
        {
            lalli.push_back(it.first);
        }
    }
    return lalli;
    }
};