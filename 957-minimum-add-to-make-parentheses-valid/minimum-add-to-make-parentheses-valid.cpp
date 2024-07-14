class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch=='(' || ch=='{' || ch=='[')
            st.push(ch);
            else
            {
                if(!st.empty())
                {
                    char top=st.top();
                    if((ch=='}' && top=='{') || (ch==']' && top=='[') || (ch==')' && top=='('))
                    {
                        st.pop();
                    }
                    else cnt++;
                }
                else if(st.empty()) cnt++;
            }
        }
        return cnt+st.size();
    }
};