class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
       int m=matrix.size();
       int n=matrix[0].size();
       vector<int>ans;
       for(int i=0;i<m;i++)
       {
        for(int j=0;j<n;j++)
        {
            if(helper(matrix,i,j)==1)
            {
                ans.push_back(matrix[i][j]);
            }
        }
       } 
       return ans;
    }
    int helper(vector<vector<int>>&matrix,int row,int col)
    {
        int mini=1;
        int maxi=1;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            if(matrix[row][col]<matrix[i][col])
            mini=0;
        }
        for(int i=0;i<n;i++)
        {
            if(matrix[row][col]>matrix[row][i])
            maxi=0;
        }
        if(mini==1 && maxi==1)
        return 1;
        return 0;
    }
};