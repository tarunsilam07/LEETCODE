class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>mpp;
        int n=s.size();
        for(int i=0;i<n;i++)
        mpp[s[i]]++;
        int cnt=0;
        for(auto it:mpp){
            if(it.second%2==0)
            cnt+=2;
            else cnt+=1;
        }
        return cnt;

    }
};