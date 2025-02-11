class Solution {
public:
    string removeOccurrences(string s, string part) {
        stack<char>st;
        string t="";
        int sz=part.size();
        char end=part[sz-1];
        for(char ch:s){
            t+=ch;
            if(ch==end && t.size()>=sz){
                if(t.substr(t.size()-sz)==part){
                    t.erase(t.size()-sz);
                }
            }
        }
        return t;
    }
};