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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
       ListNode* temp=list1;
       int cnt=0;
       ListNode* start=NULL;
       ListNode* prev=NULL;
       while(temp)
       {
        if(cnt==a)
        {
            start=temp;
            break;
        }
        cnt++;
        prev=temp;
        temp=temp->next;
       }
       ListNode* end=NULL;
       ListNode* temp1=list1;
       int cnt1=0;
       while(temp1)
       {
        if(cnt1==b)
        {
            end=temp1;
            break;
        }
        cnt1++;
        temp1=temp1->next;
       }
       prev->next=list2;
       ListNode* temp2=list2;
       while(temp2->next!=NULL) 
       {
        temp2=temp2->next;
       }    
       prev->next=list2;
       temp2->next=end->next;
       end->next=NULL;
       return list1;
    }
};