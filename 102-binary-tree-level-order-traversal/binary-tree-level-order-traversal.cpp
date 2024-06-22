/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>>ans;
      if(root==NULL) return ans;
      queue<TreeNode*>que;
      que.push(root);
      while(!que.empty())
      {
        int size=que.size();
        vector<int>level;
        for(int i=0;i<size;i++)
        {
            TreeNode* newnode=que.front();
            que.pop();
            if(newnode->left) que.push(newnode->left);
            if(newnode->right) que.push(newnode->right);
            level.push_back(newnode->val);
        }
        ans.push_back(level);
      }  
      return ans;
    }
};