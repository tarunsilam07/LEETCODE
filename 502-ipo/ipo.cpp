class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n=profits.size();
        vector<pair<int,int>>projects;
        for(int i=0;i<n;i++)
        {
            projects.emplace_back(capital[i],profits[i]);
        }
        sort(projects.begin(),projects.end());
        int i=0;
        priority_queue<int>maxHeap;
        for(int j=0;j<k;j++)
        {
            while(i<n && projects[i].first<=w)
            {
                maxHeap.push(projects[i].second);
                i++;
            }
            if(maxHeap.empty())
            break;
            w+=maxHeap.top();
            maxHeap.pop();
        }
        return w;
    }
};