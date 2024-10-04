class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int back=points[0][1];
        int cnt=1;
        for(int i=1;i<points.size();i++){
            if(points[i][0]>back){
                cnt++;
                back=points[i][1];
            }
            back=min(points[i][1],back);
        }
        return cnt;
    }
};