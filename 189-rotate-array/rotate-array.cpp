class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
         k=k%n;
         int i=0;
         int j=n-k-1;
         while(i<=j)
         {
            swap(nums[i],nums[j]);
            i++;
            j--;
         }
         int x=n-k;
         int y=n-1;
         while(x<=y)
         {
            swap(nums[x],nums[y]);
            x++;
            y--;
         }
         int left=0;
         int right=n-1;
        while(left<=right)
        {
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
        
    }
};