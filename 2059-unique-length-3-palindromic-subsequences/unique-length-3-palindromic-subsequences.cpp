class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int>mini(26,-1);
        vector<int>maxi(26,-1);
        int n=s.size();
        for(int i=0;i<n;i++){
            if(mini[s[i]-'a']==-1){
                mini[s[i]-'a']=i;
            }
            maxi[s[i]-'a']=i;
        }
        int cnt=0;
        for(int i=0;i<26;i++){
            if(mini[i]!=-1 && maxi[i]!=-1 && mini[i]<maxi[i]){
                unordered_set<char>st;
                int low=mini[i]+1;
                int high=maxi[i];
                for(int j=low;j<high;j++)
                st.insert(s[j]);
                cnt+=st.size();
            }
        }
        return cnt;
    }
};