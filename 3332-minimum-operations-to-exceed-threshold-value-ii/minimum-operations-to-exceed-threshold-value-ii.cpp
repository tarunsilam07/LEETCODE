class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for(auto it:nums)
        pq.push(it);

        long long cnt=0;
        while(pq.size()!=1){
            long long s1=pq.top();
            if(s1>=k)
            return cnt;
            pq.pop();
            long long s2=pq.top();
            pq.pop();
            long long add=(s1*2)+s2;
            pq.push(add);
            cnt++;
        }
        return cnt;
    }
};