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
 int calculate_each_subtrees_height(TreeNode* root, unordered_map<TreeNode*, int> &each_subtree_height){
        if(root == nullptr){
            return 0;
        }

        int left_subtree_height = calculate_each_subtrees_height(root->left, each_subtree_height);
        int right_subtree_height = calculate_each_subtrees_height(root->right, each_subtree_height);

        each_subtree_height[root] = 1 + max(left_subtree_height, right_subtree_height);

        return each_subtree_height[root];
    }

    void calculate_height_exclu_node( TreeNode* root, unordered_map<TreeNode*, int> each_subtree_height, unordered_map<int, int> &height_excluding_node){
        queue<TreeNode*> q;
        q.push(root);

        int height = 0;

        while(!q.empty()){
            int n = q.size();
            
            priority_queue<pair<int, int>> pq;
            for(int i=0; i<n; i++){
                TreeNode* node = q.front();
                q.pop();

                pq.push({each_subtree_height[node], node->val});
                if(node->left){
                    q.push(node->left);
                }

                if(node->right){
                    q.push(node->right);
                }
            }

            pair<int, int> ele = pq.top();
            pq.pop();

            height_excluding_node[ele.second] = height + (pq.empty() ? 0 : pq.top().first);

            while(!pq.empty()){
                int a = pq.top().second;
                height_excluding_node[a] = height + ele.first;
                pq.pop();
            }

            height++;

        }


        return;

    }

    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
        
        unordered_map<TreeNode*, int> each_subtree_height;

        calculate_each_subtrees_height(root, each_subtree_height);

        unordered_map<int, int> height_excluding_node;

        calculate_height_exclu_node(root, each_subtree_height, height_excluding_node);


        int m = queries.size();
        vector<int> ans(m, 0);

        for(int i=0; i<m; i++){
            ans[i] = height_excluding_node[queries[i]] - 1;
        }

        return ans;
    }
};