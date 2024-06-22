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
    ListNode* swapPairs(ListNode* head) {
      ListNode* temp=head;
        ListNode* previous=NULL;
        while(temp!=NULL)
        {
            ListNode* knode=getk(temp,2);
            if(knode==NULL)
            {
                if(previous)
                {
                previous->next=temp;
                break;
                }
                break;
            }
            ListNode* nextnode=knode->next;
            knode->next=NULL;
            reverse(temp);
            if(temp==head)
            {
                head=knode;
            }
            else 
            previous->next=knode;
            previous=temp;
            temp=nextnode;
        }
        return head;
    }
    ListNode* getk(ListNode* temp,int k)
    {
        k-=1;
        while(temp!=NULL && k>0)
        {
            temp=temp->next;
            k--;
        }
        return temp;
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