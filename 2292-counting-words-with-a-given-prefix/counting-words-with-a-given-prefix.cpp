class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        int n=words.size();
        for(int i=0;i<n;i++){
            if(words[i].size()<pref.size())
            continue;
            int j=0;
            int flag=0;
            while(j<pref.size()){
                if(words[i][j]!=pref[j]){
                    flag=1;
                    break;
                }
                j++;
            }
            cnt+=(flag==1)?0:1;
        }
        return cnt;
    }
};