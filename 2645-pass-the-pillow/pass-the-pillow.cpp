class Solution {
public:
    int passThePillow(int n, int time) {
        int flag=0;
        int i=1;
        while(time>0)
        {
            if(flag==0)
            {
                i++;
                if(i==n)
                {
                    flag=1;
                }
            }
            else if(flag==1)
            {
                i--;
                if(i==1)
                {
                    flag=0;
                }
            }
            time--;
        }
        return i;
    }
};