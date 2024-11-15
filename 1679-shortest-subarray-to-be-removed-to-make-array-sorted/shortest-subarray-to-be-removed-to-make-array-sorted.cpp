class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        while(low+1<n && arr[low]<=arr[low+1])
        low++;

        if(low==n-1)
        return 0;

        while(high>0 && arr[high]>=arr[high-1])
        high--;

        int mini=min(n-low-1,high);

        int i=0;
        int j=high;
        while(i<=low && j<n){
            if(arr[i]<=arr[j]){
                mini=min(mini,j-i-1);
                i++;
            }
            else j++;
        }
        return mini;
    }
};