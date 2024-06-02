class Solution {
public:
    int minBitFlips(int start, int goal) {
        int lalli=start^goal;
        int cnt=0;
        while(lalli>0)
        {
            lalli=(lalli)&(lalli-1);
            cnt+=1;
        }
        return cnt;
        
    }
};