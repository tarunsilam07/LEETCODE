class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       int num=*max_element(nums.begin(),nums.end());
       int maxi=0;
       int len=0;
       if(num){
        for(int i=0;i<nums.size();i++){
            if(nums[i]==num){
                len++;
                maxi=max(len,maxi);
            }
            else len=0;
        }
    }
           return maxi;
    }
};