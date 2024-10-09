class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        stack<char>st;
        int cnt=0;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='(')
            st.push(ch);
            else if(!st.empty()){
                char top=st.top();
                if(ch==')' && top=='(')
                st.pop();
                else cnt++;
            }
            else cnt++;
        }
        return cnt+st.size();
    }
};