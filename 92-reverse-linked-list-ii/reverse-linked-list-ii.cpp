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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        ListNode* start=getnode(temp,left);
        ListNode* end=getnode(temp,right);
        ListNode* prev=NULL;
        if(start==head)
        {
            ListNode* nextnode=end->next;
            end->next=NULL;
            reverse(start);
            start->next=nextnode;
            head=end;
            return head;
        }
        if(start!=head)
        {
            prev=getnode(temp,left-1);
        }
        ListNode* nextnode=end->next;
        end->next=NULL;
        reverse(start);
        prev->next=end;
        start->next=nextnode;
        return head;
    }
    ListNode* getnode(ListNode* temp,int k)
    {
        int cnt=1;
        while(temp)
        {
            if(cnt==k)
            {
                return temp;
            }
            cnt++;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverse(ListNode* temp)
    {
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