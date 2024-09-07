class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>prefix;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=nums[i];
            int rem=target-sum;
            if(prefix.find(rem)!=prefix.end()){
                return {i,prefix[rem]};
            }
            prefix[sum]=i;
        }
        return {-1,-1};
    }
};