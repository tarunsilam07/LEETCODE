class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        set<long long>st;
        for(auto it:nums){
            st.insert(it);
        }
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            int cnt=0;
            long long k =static_cast<long long>(nums[i])*nums[i];
            while(st.find(k)!=st.end()){
                cnt++;
                k=k*k;
                maxi=max(maxi,cnt);
                if(k>INT_MAX) break;
            }
        }
        if(maxi==0) return -1;
        return maxi+1;
    }
};