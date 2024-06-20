class Solution {
public:
    int maxDistance(vector<int>& nums, int m) {
     sort(nums.begin(),nums.end());
     int low=1;
     int n=nums.size();
     int high=nums[n-1]; 
     int ans=-1;
     while(low<=high)
     {
        int mid=low+(high-low)/2;
        if(canweplace(nums,mid,m))
        {
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
     }  
     return ans;
    }
    int canweplace(vector<int>&nums,int distance,int k)
    {
        int mags=1;
        int last=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-last>=distance)
            {
                mags++;
                last=nums[i];
            }
        }
        if(mags>=k)
        return true;
        return false;
    }
    
};