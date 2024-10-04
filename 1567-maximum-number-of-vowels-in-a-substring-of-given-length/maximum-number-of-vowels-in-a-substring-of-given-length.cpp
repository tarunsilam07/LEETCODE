class Solution {
public:
    int maxVowels(string s, int k) {
        vector<int>hash(26,0);
        hash['a' - 'a'] = 1; 
        hash['e' - 'a'] = 1; 
        hash['i' - 'a'] = 1; 
        hash['o' - 'a'] = 1; 
        hash['u' - 'a'] = 1;
        int maxi=0;
        int low=0;
        int high=k-1;
        int n=s.size();
        for(int i=0;i<k;i++){
            if(hash[s[i]-'a']==1)
            maxi++;
        }
        int cnt=maxi;
        if(k==n) return maxi;
        for(int i=k;i<n;i++){
            if(hash[s[low]-'a']==1 && cnt!=0)
            cnt--;
            if(hash[s[i]-'a']==1)
            cnt++;
            maxi=max(cnt,maxi);
            low++;
        }
        return maxi;
    }
};