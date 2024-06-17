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
    ListNode* removeNodes(ListNode* head) {
    if(head==NULL || head->next==NULL) return head;
    ListNode*temp=head;
    ListNode* prev=reverse(temp);
    ListNode* newhead=prev;
    temp=newhead;
    int maxi=newhead->val;
    while(temp!=NULL && temp->next!=NULL)
    {
        ListNode* nextnode=temp->next;
        if(nextnode->val<maxi)
        {
            ListNode* del=nextnode;
            temp->next=nextnode->next;
            delete del;
        }
        else 
        {
            maxi=nextnode->val;
            temp=temp->next;
        }
    }
    return reverse(newhead);
    }
    ListNode* reverse(ListNode* temp)
    {
        ListNode* prev=NULL;
        while(temp!=NULL)
    {
        ListNode* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    } 
    return prev;
    }
};