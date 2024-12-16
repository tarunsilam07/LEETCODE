class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for(int i=0;i<nums.size();i++){
            minHeap.push({nums[i],i});
        }
        while(k>0){
            auto [num,i]=minHeap.top();
            minHeap.pop();
            int l=num*multiplier;
            nums[i]=l;
            minHeap.push({l,i});
            k--;
        }
        return nums;
    }
};