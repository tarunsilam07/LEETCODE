class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int>hash;
        int n=arr.size();
        vector<int>rank(n,1);
        vector<int>dup;
        dup=arr;
        sort(dup.begin(),dup.end());
        int j=1;
        for(int i=0;i<n;i++){
            if(hash.size()==0 ||hash.find(dup[i])==hash.end()){
                hash[dup[i]]=j;
                j++;
            }
        }
        for(int i=0;i<n;i++){
            rank[i]=hash[arr[i]];
        }
        return rank;

    }
};