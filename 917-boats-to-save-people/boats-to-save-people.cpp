class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       int n=people.size();
       sort(people.begin(),people.end());
       int cnt=0;
       int low=0;
       int high=n-1;
       while(low<=high){
        if(people[low]+people[high]<=limit)
        low++;
        high--;
        cnt++;
       } 
       return cnt;
    }
};