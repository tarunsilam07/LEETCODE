class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        sort(skill.begin(),skill.end());
        if(n%2!=0) return (long long)-1;
        if(n==2)
        return skill[0]*skill[1];
        long long target=skill[0]+skill[n-1];
        long long total=skill[0]*skill[n-1];
        int i=1;
        int j=n-2;
        while(i<j){
            if((skill[i]+skill[j])!=target)
            return -1;
            total+=(skill[i]*skill[j]);
            i++;
            j--;
        }
        return total;
    }
};