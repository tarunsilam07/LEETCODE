class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int moves=0;
            for(int j=0;j<i;j++){
                if(boxes[j]=='1')
                moves+=abs(i-j);
            }
            for(int j=i+1;j<n;j++){
                if(boxes[j]=='1')
                moves+=abs(i-j);
            }
            ans.push_back(moves);
        }
        return ans;
    }
};