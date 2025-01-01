class Solution {
public:
    int maxScore(string s) {
        int ones=0;
        for(char ch:s){
            if(ch=='1')
            ones++;
        }
        int zeros=0;
        int maxi=0;
        int n=s.size();
        for(int i=0;i<n-1;i++){
            if(s[i]=='0')
            zeros++;
            else ones--;
            maxi=max(maxi,ones+zeros);
        }
        return maxi;
    }
};