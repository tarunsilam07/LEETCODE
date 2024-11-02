class Solution {
public:
    bool isCircularSentence(string sentence) {
        string input=sentence;
        vector<string>words;
        istringstream stream(input);
        string word;
        while(stream>>word){
            words.push_back(word);
        }
        int n=words.size();
        if(n==1){
            if(words[0][0]==words[0][words[0].size()-1])
            return true;
        }
        for(int i=1;i<n;i++){
            if(words[i][0]!=words[i-1][words[i-1].size()-1])
            return false;
        }
        if(words[n-1][words[n-1].size()-1]!=words[0][0])
        return false;

        return true;
    }
};