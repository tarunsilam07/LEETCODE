class Solution {
public:
    int reverse(int x) {
        int flag=0;
        if(x<0)
        flag=1;
        x=abs(x);
        long long rev=0;
        while(x>0){
            rev=rev*10+x%10;
            x=x/10;
        }
        if(rev<=INT_MIN || rev>=INT_MAX)
        return 0;
        if(flag==1){
            return -rev;
        }
        return rev;
    }
};