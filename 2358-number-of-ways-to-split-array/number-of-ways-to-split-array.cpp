class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int cnt=0;
        long long prefix=0;
        long long total=accumulate(nums.begin(),nums.end(),0LL);
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            prefix+=nums[i];
            total-=nums[i];
            if(prefix>=total)
            cnt++;
        }
        return cnt;
    }
};