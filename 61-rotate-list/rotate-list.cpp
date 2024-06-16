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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        if(head==NULL) return head;
        int n=1;
        while(temp->next!=NULL)
        {
            n++;
            temp=temp->next;
        }
        ListNode* tail=temp;
        k=k%n;
        if(k%n==0) return head;
        tail->next=head;
        int x=n-k;
        ListNode* newnode=getk(head,x);
        head=newnode->next;
        newnode->next=NULL;
        return head;
        

    }
    ListNode* getk(ListNode* temp,int x)
    {
      int cnt=1;
        while(temp!=NULL)
        {
            if(cnt==x)
            {
                return temp;
            }
            cnt++;
            temp=temp->next;
        }
        return temp;
    }
};