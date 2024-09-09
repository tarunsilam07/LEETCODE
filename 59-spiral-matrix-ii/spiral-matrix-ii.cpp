class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int k=n*n;
        int top=0;
        int left=0;
        int right=n-1;
        int bottom=n-1;
        vector<vector<int>>mat(n,vector<int>(n,0));
        long long count=1;
        while(count<=k){
            for(int col=left;col<=right;col++){
                mat[top][col]=count;
                count++;
            }
            top++;
            for(int row=top;row<=bottom;row++){
                mat[row][right]=count;
                count++;
            }
            right--;
            if(top<=bottom){
            for(int col=right;col>=left;col--){
                mat[bottom][col]=count;
                count++;
            }
            }
            bottom--;
            for(int row=bottom;row>=top;row--){
                mat[row][left]=count;
                count++;
            }
            left++;
        }
        return mat;
    }
};