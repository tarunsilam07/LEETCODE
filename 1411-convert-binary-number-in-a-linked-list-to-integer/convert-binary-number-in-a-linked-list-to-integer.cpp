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
    int getDecimalValue(ListNode* head) {
        if(head==NULL || head->next==NULL) return head->val;
        string s="";
        ListNode* temp=head;
        while(temp){
            s+=to_string(temp->val);
            temp=temp->next;
        }
        int total=0;
        int p=0;
        for(int i=s.size()-1;i>=0;i--){
            char l=s[i];
            int num=int(l)-48;
            int val=num*(pow(2,p));
            total+=val;
            p++;
        }
        return total;
    }
};