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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
       ListNode* temp=head;
       int cnt=1;
       while(temp)
       {
        cnt++;
        temp=temp->next;
       } 
       int l=cnt-k;
       if(k==l) return head;
       int cnt1=1;
       temp=head;
       ListNode* swap1=NULL;
    //    ListNode* prev1=NULL;
       while(temp)
       {
        if(cnt1==k)
        {
            swap1=temp;
            break;
        }
        cnt1++;
        // prev1=temp;
        temp=temp->next;
       }
    //    ListNode* next1=swap1->next;
        cnt1=1;
       temp=head;
       ListNode* swap2=NULL;
    //    ListNode* prev2=NULL;
       while(temp)
       {
        if(cnt1==l)
        {
            swap2=temp;
            break;
        }
        cnt1++;
        // prev2=temp;
        temp=temp->next;
       }
    //    ListNode* next2=swap2->next;
    swap(swap1->val,swap2->val);
       return head;
    }
};