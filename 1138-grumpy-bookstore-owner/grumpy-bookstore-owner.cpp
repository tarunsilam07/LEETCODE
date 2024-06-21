class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
       int n=customers.size();
       int sum=0;
       int maxsum=0;
       int j=0;
       for(int i=0;i<n;i++)
       {
        sum+=customers[i]*grumpy[i];
        maxsum=max(sum,maxsum);
        if(i>=minutes-1)
        {
            sum-=customers[j]*grumpy[j];
            j++;
        }
       } 
       for(int i=0;i<n;i++)
       {
        maxsum+=customers[i]*(1-grumpy[i]);
       }
       return maxsum;
    }
};