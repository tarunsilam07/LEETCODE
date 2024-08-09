class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int cnt=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int r=0;r+2<m;r++){
            for(int c=0;c+2<n;c++){
                if(count(grid,r,c)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
    bool count(vector<vector<int>>&grid,int row,int col){
        vector<int>check(10,0);
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                int num=grid[row+i][col+j];
                if(num<1 || num>9) return false;
                if(check[num]==1) return false;
                check[num]=1;
            }
        }
        int d1=grid[row][col]+grid[row+1][col+1]+grid[row+2][col+2];
        int d2=grid[row+2][col]+grid[row+1][col+1]+grid[row][col+2];

        if(d1!=d2)
        return false;

        int r1=grid[row][col]+grid[row][col+1]+grid[row][col+2];
        int r2=grid[row+1][col]+grid[row+1][col+1]+grid[row+1][col+2];
        int r3=grid[row+2][col]+grid[row+2][col+1]+grid[row+2][col+2];
        if(!(r1==d1 && r2==d1 && r3==d1))
        return false;
        
        int c1=grid[row][col]+grid[row+1][col]+grid[row+2][col];
        int c2=grid[row][col+1]+grid[row+1][col+1]+grid[row+2][col+1];
        int c3=grid[row][col+2]+grid[row+1][col+2]+grid[row+2][col+2];

        if(!(c1==d1 && c2==d1 && c3==d1))
        return false;

        return true;
    }
};