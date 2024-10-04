class Solution {
public:
    long long maximumTotalSum(vector<int>& arr) {
        int n=arr.size();
        if(n==1) return arr[0];
        sort(arr.begin(),arr.end(),greater<int>());
        long long total=arr[0];
        for(int i=1;i<n;i++){
            arr[i]=min(arr[i],arr[i-1]-1);
            total+=arr[i];
            if(arr[i]==0)
            return -1;
        }
        return total;
    }
};