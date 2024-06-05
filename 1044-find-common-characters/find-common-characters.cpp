class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
      vector<int>vec(26,0);
      vector<string>ans;
      for(int i=0;i<words[0].size();i++)
      {
        vec[words[0][i]-'a']++;
      }
      for(int i=1;i<words.size();i++)
      {
        vector<int>vec1(26,0);
        for(int j=0;j<words[i].size();j++)
        {
            if(vec[words[i][j]-'a']!=0)
            {
                vec1[words[i][j]-'a']++;
                vec[words[i][j]-'a']--;
            }
        }
        vec=vec1;
      }
      for(int i=0;i<vec.size();i++)
      {
        while(vec[i]--)
        {
            char tem = i+'a';
            string str(1,tem);
            ans.push_back(str);
        }
      }
      return ans;
    }
};