class Solution {
public:
    int maximumLength(string s) {
        unordered_map<string,int>mpp;
        int n=s.size();
        for(int i=0;i<n;i++){
            string temp="";
            for(int j=i;j<n;j++){
                temp+=s[j];
                mpp[temp]++;
            }
        }
        // for(auto it:mpp){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        int maxi=0;
        for(auto [sub,n]:mpp){
            if(n>2){
                int m=0;
                if(sub.size()!=1){
                    for(int i=0;i<sub.size()-1;i++){
                        if(sub[i]!=sub[i+1])
                        m=1;
                    }
                }
                if(m==1)
                continue;
                if(maxi<sub.size())
                maxi=sub.size();
            }
        }
        return maxi>0?maxi:-1;
    }
};