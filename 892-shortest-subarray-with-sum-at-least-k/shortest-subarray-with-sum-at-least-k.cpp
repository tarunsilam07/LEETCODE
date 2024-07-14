class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        long long n = nums.size();
        set <pair<long long,long long>> s;
        s.insert({0,-1});
        long long pref = 0;
        long long ans = n+1;
        long long mx = -n-1;
        for(long long i=0; i<nums.size(); i++){
            pref += nums[i];
            s.insert({pref,i});
            while(s.begin()->first<=pref-k){
                mx = max(mx,s.begin()->second);
                s.erase(s.begin());
            }
            ans = min(ans,i-mx);
        }
        return (ans>=n+1?-1:ans);
    }
};