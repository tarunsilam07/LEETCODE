class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<=3) return 0;
        int n=nums.size()-1;
        vector<int>ans;
        ans.push_back(nums[n]-nums[3]);
        ans.push_back(nums[n-3]-nums[0]);
        ans.push_back(nums[n-1]-nums[2]);
        ans.push_back(nums[n-2]-nums[1]);
        return *min_element(ans.begin(),ans.end());
    }
};