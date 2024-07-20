class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& row, vector<int>& col) {
        int n=row.size();
        int m=col.size();
        int k=n*m;
        vector<vector<int>>ans(n,vector<int>(m,0));
        vector<int>currRow(n,0);
        vector<int>currCol(m,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans[i][j]=min(row[i]-currRow[i],col[j]-currCol[j]);
                currRow[i]+=ans[i][j];
                currCol[j]+=ans[i][j];
            }
        }
        return ans;
    }
};