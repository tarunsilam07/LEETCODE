class Solution {
public:
    bool judgeSquareSum(int c) {
        long long  a=0;
        long long b=sqrt(c);
        while(a<=b)
        {
          long long sum=0;
          sum=(a*a)+(b*b);
          if(sum==c) return true;
          else if(sum>c) b--;
          else if(sum<c) a++;  
        }
        return false;
    }
};