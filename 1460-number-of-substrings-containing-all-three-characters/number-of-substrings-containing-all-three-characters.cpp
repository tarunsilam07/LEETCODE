class Solution {
public:
    int numberOfSubstrings(string s) {
      vector<int>lastseen(3,-1); 
      int cnt=0;
      for(int i=0;i<s.size();i++)
      {
        lastseen[s[i]-'a']=i;
        cnt=cnt+(1+(*min_element(lastseen.begin(),lastseen.end())));
      } 
       return cnt;
    }
   
};