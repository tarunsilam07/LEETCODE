class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream stream(sentence);
        string word;
        vector<string>words;
        while(stream>>word)
        words.push_back(word);
        for(int i=0;i<words.size();i++){
            int flag=0;
            int j=0;
             if(searchWord.size()>words[i].size()){
                    continue;
                }
            while(j<searchWord.size() && j<words[i].size()){
                if(searchWord[j]!=words[i][j])
                flag=1;
                j++;
            }
            if(flag==0)
            return i+1;
        }
        return -1;
    }
};