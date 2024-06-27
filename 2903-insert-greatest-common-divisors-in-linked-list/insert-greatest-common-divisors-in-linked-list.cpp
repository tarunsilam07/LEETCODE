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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        while(temp->next!=NULL)
        {
            ListNode* front=temp->next;
            int node=GCD(temp->val,front->val);
            ListNode* newnode=new ListNode(node);
            temp->next=newnode;
            newnode->next=front;
            temp=front;
        }
        return head;
    }
    int GCD(int num1,int num2)
    {
        int maxi=0;
        int mini=0;
        if(num1==num2)
        {
            maxi=num1;
            mini=num2;
        }
        else{
        maxi=max(num1,num2);
        mini=min(num1,num2);
        }
        vector<int>v1;
        for(int i=1;i<=maxi;i++)
        {
            if(maxi%i==0 && mini%i==0)
            {
                v1.push_back(i);
            }
        }
        return *max_element(v1.begin(),v1.end());
    }
};