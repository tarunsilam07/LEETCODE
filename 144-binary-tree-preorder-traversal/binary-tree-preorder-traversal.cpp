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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>tree;
        treetraversal(root,tree);
        return tree;
    }
    void treetraversal(TreeNode* node,vector<int>&tree)
    {
        if(node==NULL)
        {
            return;
        }
        tree.push_back(node->val);
        treetraversal(node->left,tree);
        treetraversal(node->right,tree);
    }
};