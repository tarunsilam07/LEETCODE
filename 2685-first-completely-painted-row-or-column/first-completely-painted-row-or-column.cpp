class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int>rows(m,0);
        vector<int>cols(n,0);
        vector<int>rindex(m*n+1,0);
        vector<int>cindex(m*n+1,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                rindex[mat[i][j]]=i;
                cindex[mat[i][j]]=j;
            }
        }
        for(auto it:rindex)
        cout<<it<<" ";
        cout<<endl;
        for(auto it:cindex)
        cout<<it<<" ";

        for(int i=0;i<arr.size();i++){
            int r=rindex[arr[i]];
            int c=cindex[arr[i]];
            rows[r]+=1;
            if(rows[r]==n)
            return i;
            cols[c]+=1;
            if(cols[c]==m)
            return i;
        }
        return -1;
    }
};