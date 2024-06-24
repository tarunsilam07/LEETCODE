class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
    //    int n=nums.size();
    //    int cnt=0;
    //    for(int i=0;i<n;i++)
    //    {
    //     if(nums[i]==0)
    //     {
    //         if(i+k-1>=n) return -1;
    //         for(int j=i;j<i+k;j++)
    //         {
    //             (nums[j]==0) ? nums[j]=1:nums[j]=0;
    //         }
    //         cnt++;
    //     }
    //    } 
    // //    for(int i=0;i<n;i++)
    // //    {
    // //     if(nums[i]==0) return -1;
    // //    }
    //    return cnt;
     int ans = 0, flips = 0;
        for(int i = 0; i < nums.size(); i++) {
            if((nums[i] + flips) % 2 == 0) {
                if(i > nums.size() - k) {
                    return -1;
                } else {
                    ans++;
                    flips++;
                    nums[i] = -1;
                }
            }
            if(i + 1 >= k) {
                flips -= (nums[i - k + 1] < 0);     
            }
        }
        return ans;
    }
};