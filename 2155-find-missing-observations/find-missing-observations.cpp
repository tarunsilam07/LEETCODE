class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
       int sum=0;
       for(int i=0;i<rolls.size();i++){
        sum+=rolls[i];
       } 
       int rem=mean*(n+rolls.size())-sum;
       if((rem>6*n) || (rem<n))
       return {};

       int dis=rem/n;
       int add=rem%n;
       vector<int>ans(n,dis);
       for(int i=0;i<add;i++){
            ans[i]++;
       }
       return ans;
    }
};