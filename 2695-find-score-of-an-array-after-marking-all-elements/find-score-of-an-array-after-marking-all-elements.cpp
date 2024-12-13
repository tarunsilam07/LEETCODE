class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        vector<bool> marked(n, false);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for (int i = 0; i < n; i++) 
        minHeap.push({nums[i], i});
        long long ans = 0;
        while (!minHeap.empty()) {
            auto [val, ind] = minHeap.top();
            minHeap.pop();
            if (!marked[ind]) {
                ans += val;
                marked[ind] = true;
                if (ind + 1 < n) 
                marked[ind + 1] = true;
                if (ind - 1 >= 0) 
                marked[ind - 1] = true;
            }
        }
        return ans;
    }
};
