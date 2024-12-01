class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>mpp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mpp[arr[i]]=i;
        }
        for(int i=0;i<n;i++){
            int target=2*arr[i];
            if(mpp.find(target)!=mpp.end() && mpp[target]!=i)return true;
        }
        return false;
    }

};