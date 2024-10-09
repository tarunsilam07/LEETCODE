class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int remove=target-nums[i];
            if(mpp.find(remove)!=mpp.end()){
                return {mpp[remove],i};
            }
            mpp[nums[i]]=i;
        }
        return {-1,-1};
    }
};