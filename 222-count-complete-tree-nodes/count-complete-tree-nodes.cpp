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
    int countNodes(TreeNode* root) {
         vector<int>tree;
        treetraversal(root,tree);
        return tree.size();
    }
    void treetraversal(TreeNode* node,vector<int>&tree)
    {
        if(node==NULL)
        {
            return;
        }
        treetraversal(node->left,tree);
        tree.push_back(node->val);
        treetraversal(node->right,tree);
    }
};