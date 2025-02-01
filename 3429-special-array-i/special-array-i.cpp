class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return true;
        for(int i=1;i<n;i++){
            int x=nums[i-1]%2;
            int y=nums[i]%2;
            if(x==y)
            return false;
        }
        return true;
    }
};