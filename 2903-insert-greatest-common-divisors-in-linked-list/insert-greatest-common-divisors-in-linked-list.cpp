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
    int GCD(int val1,int val2)
    {
        while(val2 != 0) {
            int temp = val2;
            val2 = val1 % val2;
            val1 = temp;
        }
        return val1;
    }
};