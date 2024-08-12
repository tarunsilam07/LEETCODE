class KthLargest {
public:
    vector<int>st;
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for(int i=0;i<nums.size();i++){
            st.push_back(nums[i]);
        }
        sort(st.begin(),st.end());
    }
    
    int add(int val) {
        int ind=place(val);
        st.insert(st.begin()+ind,val);
        return st[st.size()-k];
    }

    int place(int num){
        int low=0;
        int high=st.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int val=st[mid];
            if(val==num) return mid;
            else if(val>num){
                high=mid-1;
            }
            else 
            low=mid+1;
        }
        return low;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */