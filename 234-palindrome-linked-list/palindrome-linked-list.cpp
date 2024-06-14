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
    bool isPalindrome(ListNode* head) {
     ListNode* fast=head;
     ListNode* slow=head;
     if(head==NULL || head->next==NULL) return head;
     while(fast->next!=NULL && fast->next->next!=NULL)
     {
        fast=fast->next->next;
        slow=slow->next;
     }
     ListNode* newhead=reverse(slow->next);
     ListNode* first=head;
     ListNode* second=newhead;
     ListNode* temp=first;
     while(temp!=slow->next)
     {
        cout<< temp-> val<<" ";
        temp=temp->next;
     }
     cout<<endl;
     ListNode* t=second;
     while(t)
     {
        cout<<t->val<<" ";
        t=t->next;
     }
     while(second)
     {
        if(first->val!=second->val)
        {
            reverse(newhead);
            return false;
        }
        first=first->next;
        second=second->next;
     }
     reverse(newhead);
     return true;

    }
    ListNode* reverse(ListNode* head)
    {
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp)
        {
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
};