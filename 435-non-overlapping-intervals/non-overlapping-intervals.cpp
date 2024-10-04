class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](vector<int>&a,vector<int>&b){
            return a[1]<b[1];
        });
        int cnt=0;
        int back=intervals[0][1];
        for(int i=1;i<intervals.size();++i){
            if(intervals[i][0]>=back){
                back=intervals[i][1];
            }
            else cnt++;
        }
        return cnt;
    }

};