class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
       int cnt=0;
       int n=arr.size();
       for(int i=0;i<n;i++)
       {
        if(arr[i]%2==1)
        {
            cnt++;
        }
        else if(arr[i]%2==0)
        {
            cnt=0;
        }
        if(cnt>2)
        {
            return true;
        }
       } 
       return false;
    }
};