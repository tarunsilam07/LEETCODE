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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>mat(m,vector<int>(n,-1));
        int top=0;
        int left=0;
        int bottom=m-1;
        int right=n-1;
        while(head){
            for(int col=left;head &&col<=right;col++){
                mat[top][col]=head->val;
                head=head->next;
            }
            top++;
            for(int row=top;head && row<=bottom;row++){
                mat[row][right]=head->val;
                head=head->next;
            }
            right--;
            for(int col=right;head && col>=left;col--){
                mat[bottom][col]=head->val;
                head=head->next;
            }
            bottom--;
            for(int row=bottom;head && row>=top;row--){
                mat[row][left]=head->val;
                head=head->next;
            }
            left++;
        }
        return mat;
    }
};