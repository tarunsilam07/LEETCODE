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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return head;
        if(head->next==NULL && n==1) return NULL;
        int cnt=1;
        ListNode* temp=head;
        while(temp->next!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        n=n%cnt;
        if(n%cnt==0)
        {
            head=head->next;
            return head;
        }
        int k=cnt-n;
        temp=head;
        ListNode* knode=getk(temp,k);
        ListNode* del=knode->next;
        knode->next=del->next;
        delete del;
        return head;
        
    }
    ListNode* getk(ListNode* temp,int k)
    {
        int x=1;
        while(temp!=NULL)
        {
            if(x==k)
            return temp;
            x++;
            temp=temp->next;
        }
        return temp;
    }
};