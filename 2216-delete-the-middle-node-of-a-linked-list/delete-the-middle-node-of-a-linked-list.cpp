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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* preslow=NULL;
        while(fast!=NULL && fast->next!=NULL)
        { 
            fast=fast->next->next;
            preslow=slow;
            slow=slow->next;
        }
        preslow->next=slow->next;
        delete slow;
        return head;
    }
};