class Solution {
public:
    int countSeniors(vector<string>& details) {
       int n=details.size();
       int cnt=0;
       for(int i=0;i<n;i++)
       {
        if((details[i][11]=='6' && details[i][12]>'0') || details[i][11]>'6')
        {
            cout<<details[i][11]<<endl;
            cnt++;
        }
       } 
       return cnt;
    }
};