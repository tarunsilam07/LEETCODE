class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int i =0;
        int j =1;
        int ans =1;
        sort(nums.begin(),nums.end());
        while(j<nums.size())
        {
            while(nums[j]-nums[i]>2*k &&  i<j)
            {
                i++;
            }
            ans = max(ans,j-i+1);
            j++;
        }

        return ans;
    }
};