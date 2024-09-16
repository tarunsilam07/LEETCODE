class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n=timePoints.size();
        vector<int>minutes(n);
        for(int i=0;i<n;i++){
            string t=timePoints[i];
            int hours=stoi(t.substr(0,2));
            int min=stoi(t.substr(3));
            minutes[i]=hours*60+min;
        }
        int mini=INT_MAX;
        sort(minutes.begin(),minutes.end());
        for(int i=0;i<n-1;i++){
            mini=min(minutes[i+1]-minutes[i],mini);
        }
        return min(mini,24*60-minutes[n-1]+minutes[0]);
    }
};