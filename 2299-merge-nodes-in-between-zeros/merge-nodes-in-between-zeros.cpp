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
    ListNode* mergeNodes(ListNode* head) {
       if(head==NULL ||head->next==NULL) return head;
       ListNode* temp1=head;
       ListNode* dummy=new ListNode(-1);
       ListNode* curr=dummy;
       while(temp1->next!=NULL)
       {
        ListNode* temp2=temp1->next;
        int node=0;
        while(temp2->val!=0)
        {
            node+=temp2->val;
            temp2=temp2->next;
        }
        temp1=temp2;
        ListNode* newnode=new ListNode(node);
        curr->next=newnode;
        curr=newnode;
       }
       return dummy->next;
    }
};