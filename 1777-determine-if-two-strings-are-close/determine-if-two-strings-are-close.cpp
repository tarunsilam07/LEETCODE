class Solution {
public:
    bool closeStrings(string word1, string word2) {
      if(word1.size()!=word2.size())
      return false;
      unordered_map<char,int>mpp1,mpp2;
      for(auto it:word1)
      mpp1[it]++;
      for(auto it:word2)
      mpp2[it]++;
      for(auto it:mpp1){
      if(mpp2.find(it.first)==mpp2.end())
      return false;
      }
      unordered_map<int,int>freq1,freq2;
      for(auto it:mpp1)
      freq1[it.second]++;
      for(auto it:mpp2)
      freq2[it.second]++;
      for(auto it:freq1){
        if(freq2.find(it.first)==freq2.end())
        return false;
        if(freq1[it.first]!=freq2[it.first])
        return false;
      }
      return true;
    }
};