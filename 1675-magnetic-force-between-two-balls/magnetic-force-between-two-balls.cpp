class Solution {
public:
    int maxDistance(vector<int>& arr, int m) {
        sort(arr.begin(),arr.end());
        int low=1;
        int n=arr.size();
        int high=arr[n-1];
        int ans=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(canweplace(arr,mid,m))
            {
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
    int canweplace(vector<int>&arr,int distance,int k)
    {
        int mags=1;
        int last=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-last>=distance)
            {
                mags++;
                last=arr[i];
            }
        }
        if(mags>=k)
            return true;
        return false;
    }
};