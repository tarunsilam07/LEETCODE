class Solution {
public:
    int minDays(vector<int>& bloomday, int m, int k) {
      int low=0;
      int high=0;
      for(auto it:bloomday)
      {
        high=max(high,it);
      } 
      int mini=-1; 
      while(low<=high)
      {
        int mid=(low+high)/2;
        int bou=getbou(mid,k,bloomday);
        if(bou>=m)
        {
            mini=mid;
            high=mid-1;
        }
        else low=mid+1;
      }
      return mini;
    }
    int getbou(int mid,int k,vector<int>&bloomday)
    {
        int bou=0;
        int cnt=0;
        for(int i=0;i<bloomday.size();i++)
        {
            if(bloomday[i]<=mid)
            {
                cnt++;
            }
            else cnt=0;
            if(cnt==k)
            {
                bou++;
                cnt=0;
            }
        }
        return bou;
    }
};