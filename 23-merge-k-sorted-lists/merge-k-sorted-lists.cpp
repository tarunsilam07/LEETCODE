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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         priority_queue <int> pq;
        for(int i = 0; i < lists.size(); i++){
            ListNode* temp = lists[i];
            while(temp){
                pq.push(temp->val);
                temp = temp->next;
            }
        }

        ListNode* ans = new ListNode();
        while(!pq.empty()){
            ListNode* newNode = new ListNode(pq.top());
            pq.pop();
            newNode->next = ans->next;
            ans->next = newNode;
        }

        return ans->next;
    
    }
};