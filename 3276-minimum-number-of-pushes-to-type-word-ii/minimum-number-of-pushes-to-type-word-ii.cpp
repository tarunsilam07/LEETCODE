class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>mpp;
        for(int i=0;i<word.size();i++){
            mpp[word[i]]++;
        }
        vector<int>count;
        for(auto it:mpp){
            count.push_back(it.second);
        }
        sort(count.rbegin(),count.rend());
        if(count.size()<=8) return word.size();
        int push=0;
        for(int i=0;i<count.size();i++){
           double k=ceil((i+1)/8.0);
           push=push+count[i]*k;
        }
        return push;
    }
};