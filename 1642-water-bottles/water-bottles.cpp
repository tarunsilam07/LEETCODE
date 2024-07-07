class Solution {
public:
    int numWaterBottles(int n, int m) {
        int cnt=-1;
        int total=n;
        int flag=1;
        while(flag!=0)
        {
            cnt=n/m;
            if(cnt==0)
            flag=0;
            total+=cnt;
            n=(n/m)+(n%m);
        }
        return total;
    }
};