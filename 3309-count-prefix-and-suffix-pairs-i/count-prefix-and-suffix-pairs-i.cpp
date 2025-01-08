class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt=0;
        int n=words.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(isPrefixandSuffix(words[i],words[j]))
                cnt++;
            }
        }
        return cnt;
    }
    bool isPrefixandSuffix(string a,string b){
        int i=0;
        int j=0;
        int n=a.size();
        int m=b.size();
        if(n>m) return false;
        int flag=true;
        while(i<n){
            if(a[i]!=b[j])
            return false;
            i++;
            j++;
        }
        i=n-1;
        j=m-1;
        while(i>=0){
            if(a[i]!=b[j])
            return false;
            i--;
            j--;
        }
        return true;
    }
};