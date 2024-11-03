class Solution {
public:
    bool rotateString(string s, string goal) {
       if(s.size()!=goal.size()) return false;
       int n=s.size();
       if(s==goal) return true;
       for(int i=0;i<n;i++){
            char ch=goal[0];
            goal.erase(0,1);
            goal+=ch;
            if(goal==s) return true;
       } 
       return false;
    }
};