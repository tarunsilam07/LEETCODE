class Solution {
public:
    int numberOfChild(int n, int k) {
        int flag=0;
        int i=0;
        int cnt=0;
        while(cnt!=k)
        {
            if(flag==0)
            {
                i++;
                if(i==n-1)
                {
                    flag=1;
                }
            }
            else if(flag==1)
            {
                i--;
                if(i==0)
                {
                    flag=0;
                }
            }
            cnt++;
        }
        return i;
    }
};