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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans(k,nullptr);
        ListNode* temp=head;
        int n=0;
        while(temp){
            temp=temp->next;
            n++;
        }
        int size=n/k;
        int extra=n%k;
        temp=head;
        for(int i=0;i<k;i++){
            ans[i]=temp;
            int curr=size+((extra>0)?1:0);
            extra--;

            for(int j=0;temp && j<curr-1;j++){
                temp=temp->next;
            }

            if(temp){
                ListNode* nextnode=temp->next;
                temp->next=NULL;
                temp=nextnode;
            }
        }
        return ans;
    }
};