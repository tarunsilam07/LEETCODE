class Solution {
public:
    bool check(vector<int>& nums) {
    vector<int>vec;
    vec=nums;
    sort(vec.begin(),vec.end());
    int n=nums.size();
    int temp;
    for(int i=0;i<n;i++)
    {
        temp=nums[0];
        nums.erase(nums.begin());
        nums.push_back(temp);
        if(vec==nums)
        {
            return true;
        }
    }
    return false;

    }
};