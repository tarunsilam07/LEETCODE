class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
       long long preSum[nums.size()];
       preSum[0]=nums[0];
       unordered_map<int,int> mp;
       int size=nums.size();
       mp[0]=-1;

       for(int i=1; i<nums.size(); i++){
         preSum[i]=preSum[i-1]+nums[i];
       } 
       int mainRem= preSum[(int)nums.size()-1]%p;
       if(mainRem==0) return 0;
       if(preSum[nums.size()-1]<p) return -1;
       for(int i=0; i<nums.size(); i++){
        int rem= preSum[i]%p;
        if(mp.find((rem-mainRem+p)%p)!=mp.end()){
            size=min(size,i-mp[(rem-mainRem+p)%p]);
        }
        mp[rem]=i;
       }

       return (size<nums.size())?size:-1;
    }
};