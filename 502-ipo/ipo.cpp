class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
       int n=profits.size();
       std::vector<std::pair<int,int>>pro;
       for(int i=0;i<n;i++)
       {
        pro.emplace_back(capital[i],profits[i]);
       } 
       sort(pro.begin(),pro.end());
       priority_queue<int>maxHeap;
       int i=0;
       for(int j=0;j<k;j++)
       {
        while(i<n && pro[i].first<=w)
        {
            maxHeap.push(pro[i].second);
            i++;
        }
        if(maxHeap.empty())
        {
            break;
        }
        w+=maxHeap.top();
        maxHeap.pop();
       }
       return w;
    }
};