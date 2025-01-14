class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int cnt=0;
        int n=A.size();
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[A[i]]++;
            mpp[B[i]]++;
            if(A[i]==B[i])
            cnt++;
            else if(mpp[A[i]]>1 && mpp[B[i]]>1)
            cnt+=2;
            else if(mpp[A[i]]>1)
            cnt++;
            else if(mpp[B[i]]>1)
            cnt++;
            ans.push_back(cnt);
        }
        return ans;
    }
};