class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>vec((m*n)+1,0);
        vector<int>ans(2,0);
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                vec[grid[i][j]]+=1;
            }
            
        }
        for(int i=1;i<m*n+1;i++){
            if(vec[i]>1)
            ans[0]=i;
            if(vec[i]==0)
            ans[1]=i;
        }
        return ans;
    }
};