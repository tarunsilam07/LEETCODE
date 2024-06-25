class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closet=0;
        int min=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            //if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target)
                {
                    return sum;
                }
                else if(sum>target)
                {
                    k--;
                }
                else j++;
                int diff=abs(target-sum);
                if(diff<min)
                {
                    min=diff;
                    closet=sum;
                }
            }
        }
        return closet;
    }
};