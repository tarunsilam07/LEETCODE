class Solution {
public:
    string compressedString(string word) {
       string comp="";
       int cnt=1;
       int n=word.size();
       if(n==1){
        comp+="1";
        comp+=word[0];
        return comp;
       }
       for(int i=0;i<n;i++){
        if(word[i]==word[i+1]){
            if(cnt==9){
            string num=to_string(cnt);
            comp+=num;
            comp+=word[i];
            cnt=1;
            }
            else
            cnt++;
        }
        else if(word[i]!=word[i+1]){
            string num=to_string(cnt);
            comp+=num;
            comp+=word[i];
            cnt=1;
        }
       } 
       return comp;
    }
};