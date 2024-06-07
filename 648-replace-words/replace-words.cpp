class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        istringstream sStream(sentence);
        unordered_set<string>dset(dictionary.begin(),dictionary.end());
        string word;
        string news;
        while(getline(sStream,word,' '))
        {
            news+=shortr(word,dset)+ " "   ;
        }
        news.pop_back();
        return news;
    }
    string shortr(string word,unordered_set<string>dset)
    {
        for(int i=0;i<=word.size();i++)
        {
            string root=word.substr(0,i);
            if(dset.contains(root))
            {
                return root;
            }
        }
        return word;
    }
};