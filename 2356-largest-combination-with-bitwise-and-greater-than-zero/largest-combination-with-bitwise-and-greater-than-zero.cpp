class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<int>count(24,0);
        for(int i=0;i<24;i++){
            for(int j=0;j<candidates.size();j++){
                if((candidates[j]&(1<<i))!=0)
                count[i]++;
            }
        }
        return *max_element(count.begin(),count.end());
    }
};