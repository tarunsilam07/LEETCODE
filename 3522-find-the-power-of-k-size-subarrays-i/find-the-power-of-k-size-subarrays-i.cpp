class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n-k+1;i++){
            int maxi=nums[i];
            int flag=0;
            for(int j=i+1;j<i+k;j++){
                if(nums[j]>nums[j-1] && nums[j]==nums[j-1]+1)
                maxi=max(nums[j],nums[j-1]);
                else flag=1;
            }
            if(flag==1)
            maxi=-1;
            ans.push_back(maxi);
        }
        return ans;
    }
};