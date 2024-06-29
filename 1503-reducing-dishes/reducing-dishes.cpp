class Solution {
public:
    int maxSatisfaction(vector<int>& satis) {
       
       int n=satis.size();
        sort(satis.begin(),satis.end());
        int ans=0,sum=0;

        for(int i=n-1;i>=0;i--){
            sum+=satis[i];
            if(sum<0) break;
            else{
                ans+=sum;
            }
        }

        return ans;
    }
};