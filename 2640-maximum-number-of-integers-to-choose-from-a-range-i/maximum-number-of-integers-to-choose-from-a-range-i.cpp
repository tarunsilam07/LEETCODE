class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        set<int>st;
        for(auto it:banned)
        st.insert(it);
        int cnt=0;
        int total=0;
        int flag=0;
        for(int i=1;i<=n;i++){
            if(st.find(i)==st.end()){
                if(total+i<=maxSum){
                    total+=i;
                    cnt++;
                }
                else flag=1;
            }
            if(flag==1)
            break;
        }
        return cnt;
    }
};