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
    int pairSum(ListNode* head) {
        if(head==NULL || head->next==NULL) return head->val;
        if(head->next->next==NULL){
            int sum=head->val+head->next->val;
            return sum;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* preslow=NULL;
        while(fast!=NULL && fast->next!=NULL){
            preslow=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        preslow->next=NULL;
        ListNode* temp2=reverseList(slow);
        ListNode* temp1=head;
        int max=0;
        while(temp1!=NULL && temp2!=NULL){
            int sum=temp1->val+temp2->val;
            if(sum>max)
            max=sum;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return max;
    }
    ListNode* reverseList(ListNode* temp){
        ListNode * prev=NULL;
        while(temp!=NULL){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
};