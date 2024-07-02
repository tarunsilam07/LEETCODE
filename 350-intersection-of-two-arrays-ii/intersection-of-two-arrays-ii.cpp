class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       if(nums2.size()<nums1.size())
       {
        vector<int>temp=nums1;
        nums1=nums2;
        nums2=temp;
       }
       map<int,int>mpp;
       vector<int>ans;
       for(int i=0;i<nums1.size();i++)
       {
        mpp[nums1[i]]++;
       }
       for(int i=0;i<nums2.size();i++)
       {
        if(mpp[nums2[i]])
        {
            ans.push_back(nums2[i]);
            mpp[nums2[i]]--;
            if(mpp[nums2[i]]==0)
            {
                mpp.erase(nums2[i]);
            }
        }
       }
       return ans;
    }
};