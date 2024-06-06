class Solution {
public:
    bool isPalindrome(int x) {
      if(x<0) return false;
      long long rev=0;
      long long temp=x;
      while(x>0)
      {
        long long  k=x%10;
        rev=rev*10+k;
        x=x/10;
      }  
      if(rev==temp)
      return true;
      return false;
        
    }
};