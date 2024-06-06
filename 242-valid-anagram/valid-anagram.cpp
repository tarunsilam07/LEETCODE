class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0;
        int j=0;
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        while(i<n && j<m)
        {
            if(s[i]!=t[j]) return false;
            i++;
            j++;
        }
        return true;
        
    }
};