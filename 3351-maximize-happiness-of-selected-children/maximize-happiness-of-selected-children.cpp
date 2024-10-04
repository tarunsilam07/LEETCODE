class Solution {
public:
    long long maximumHappinessSum(vector<int>& arr, int k) {
        int n=arr.size();
        sort(arr.begin(),arr.end(),greater<int>());
        long long total=arr[0];
        for(int i=1;i<k&&i<n;i++)
        {
            if(arr[i]-i<=0) return total;
            else
            total+=arr[i]-i;
        }
        return total;
    }
};