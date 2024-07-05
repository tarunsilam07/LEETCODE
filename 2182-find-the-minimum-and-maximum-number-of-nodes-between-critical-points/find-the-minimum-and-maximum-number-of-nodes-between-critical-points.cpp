/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans(2,-1);
        if(head==NULL || head->next==NULL) return ans;
        if(head->next->next==NULL) return ans;
        if(head->next->next->next==NULL) return ans;
        ListNode* prev=head;
        vector<int>index;
        int cnt=2;
        while(prev->next->next!=NULL)
        {
            ListNode* curr=prev->next;
            ListNode* next=curr->next;
            if(curr->val>prev->val && curr->val>next->val)
            {
                index.push_back(cnt);
            }
            else if(curr->val<prev->val && curr->val<next->val)
            {
                index.push_back(cnt);
            }
            cnt++;
            prev=prev->next;
        }
        if(index.size()<2) return ans;
        ans[1]=index[index.size()-1]-index[0];
        int mini=INT_MAX;
        for(int i=1;i<index.size();i++)
        {
            if(index[i]-index[i-1]<mini)
            {
                mini=index[i]-index[i-1];
            }
        }
        ans[0]=mini;
        return ans;
    }
};