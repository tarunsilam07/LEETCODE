class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        long long prefix=0;
        long long res=0;
        vector<int>mod(k);
        mod[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            prefix=(prefix+nums[i]%k+k)%k;
            res=res+mod[prefix];
            mod[prefix]=mod[prefix]+1;
        }
        return res;
    }
};