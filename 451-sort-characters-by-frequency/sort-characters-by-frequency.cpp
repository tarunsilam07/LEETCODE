class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        string ans="";
        for(auto it:s)
        mpp[it]++;
        multimap<int,char,greater<int>>table;
        for(auto it:mpp){
            table.insert({it.second,it.first});
        }
        for(auto [freq,ch]:table){
            int num=freq;
            while(num){
                ans+=ch;
                num--;
            }
        }
        return ans;
    }
};