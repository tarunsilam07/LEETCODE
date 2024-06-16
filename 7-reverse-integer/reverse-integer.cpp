class Solution {
public:
    int reverse(int x) {
       long long ans=0;
       int k=0;
       if(x<0)
       {
        k=1;
        x=abs(x);
       }
       while(x>0)
       {
        ans=ans*10+x%10;
        x=x/10;
       }
       if(ans<=INT_MIN || ans>=INT_MAX) return 0;
       if(k==1)
       return -ans;
       return ans;
    }
};