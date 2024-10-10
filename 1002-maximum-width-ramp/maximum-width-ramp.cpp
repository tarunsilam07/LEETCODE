class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(st.empty() || nums[st.top()]>nums[i]){
                st.push(i);
            }
        }
        int maxi=0;
        for(int i=n-1;i>=0;i--){
            while(st.size()!=0 && nums[st.top()]<=nums[i]){
                maxi=max(maxi,i-st.top());
                st.pop();
            }
        }
        return maxi;
    }
};  