class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();

        int low=0;
        int high=nums[n-1]-nums[0];
        while(low<high){
            int mid=low+(high-low)/2;
            int cnt=count(nums,mid);
            if(cnt<k)
            low=mid+1;
            else
            high=mid;
        }
        return low;
    }
    int count(vector<int>&nums,int d){
        int cnt=0;
        int n=nums.size();
        int i=0;
        for(int j=0;j<n;j++){
            while(nums[j]-nums[i]>d){
                ++i;
            }
            cnt+=j-i;
        }
        return cnt;
    }
};