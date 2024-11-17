class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
          priority_queue<pair<long long , long long> , vector<pair<long long , long long>> , greater<pair<long long , long long>>> pq;
        long long sumi = 0;
        long long maxi = 1e18;
        for(long long i = 0; i<nums.size() ; i++){
            sumi += (long long)nums[i];
            if(sumi >= k){
                maxi = min(maxi , i+1);
            }
            while(!pq.empty() && (sumi - pq.top().first >= k)){
                auto &p = (pq.top());
                maxi = min(maxi , i - p.second );
                pq.pop();
            }
            pq.push({sumi , i});
        }
        if(maxi == 1e18){
            return -1;
        }
        else{
            return maxi;
        } 
    }
};