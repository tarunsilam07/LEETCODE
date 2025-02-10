class Solution {
public:
    string clearDigits(string s) {
       stack<char>st;
       for(int i=0;i<s.size();i++){
        int t=int(s[i]);
        if(st.size()==0 && t<96){
            continue;
        }
        else if(t<96){
            st.pop();
        }
        else st.push(s[i]);
       } 
       string l="";
       while(!st.empty()){
        l+=st.top();
        st.pop();
       }
       reverse(l.begin(),l.end());
       return l;
    }
};