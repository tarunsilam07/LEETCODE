class Solution {
public:
    int jump(vector<int>& nums) {
     int jumps=0;
     int n=nums.size();
     int l=0;
     int r=0;
     while(r<n-1) 
     {
        int far=0;
        for(int index=l;index<=r;index++)
        {
            far=max(far,nums[index]+index);
        }
        l=r+1;
        r=far;
        jumps=jumps+1;
     }  
     return jumps;
    }
};