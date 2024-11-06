class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n=nums.size();
        int start=0;
        for(int i=1;i<n;i++){
            int x=__builtin_popcount(nums[i-1]);
            int y=__builtin_popcount(nums[i]);

            if(x!=y){
                sort(nums.begin()+start,nums.begin()+i);
                start=i;
            }
        }
        sort(nums.begin()+start,nums.end());

        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1])
            return false;
        }
        return true;
    }
};