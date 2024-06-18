class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
       vector<pair<int,int>>jobs;
       jobs.push_back({0,0});
       for(int i=0;i<profit.size();i++)
       {
        jobs.push_back({difficulty[i],profit[i]});
       } 
       sort(jobs.begin(),jobs.end());
       for(int i=0;i<jobs.size()-1;i++)
       {
        jobs[i+1].second=max(jobs[i].second,jobs[i+1].second);
       }
       int net=0;
       for(int i=0;i<worker.size();i++)
       {
        int abs=worker[i];
        int low=0,high=jobs.size()-1,jobprofit=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(jobs[mid].first<=abs)
            {
                jobprofit=max(jobprofit,jobs[mid].second);
                low=mid+1;
            }
            else
            high=mid-1;
        }
        net+=jobprofit;
       }
       return net;
    }
};