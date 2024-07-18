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
    int countPairs(TreeNode* root, int distance) {
         return countPairsHelper(root, distance)[11];
    }
    vector<int> countPairsHelper(TreeNode* currNode, int distLimit) {
        vector<int> distNodeCntMp(12, 0);
        if (currNode == nullptr) return distNodeCntMp;
        if (currNode->left == nullptr && currNode->right == nullptr) {
            distNodeCntMp[0]++;
            return distNodeCntMp;
        }

        vector<int> leftDistNodeCntMp = countPairsHelper(currNode->left, distLimit);
        vector<int> rightDistNodeCntMp = countPairsHelper(currNode->right, distLimit);

        int totalGoodPairsTillNow = leftDistNodeCntMp[11] + rightDistNodeCntMp[11];
        distNodeCntMp[11] += totalGoodPairsTillNow;

        for (int dist = 0; dist < 10; dist++) {
            distNodeCntMp[dist + 1] += leftDistNodeCntMp[dist] + rightDistNodeCntMp[dist];
        }

        for (int dist1 = 0; dist1 <= distLimit; dist1++) {
            for (int dist2 = 0; dist2 <= distLimit; dist2++) {
                if (dist1 + dist2 + 2 <= distLimit) {
                    distNodeCntMp[11] += leftDistNodeCntMp[dist1] * rightDistNodeCntMp[dist2];
                }
            }
        }
        
        return distNodeCntMp;
    }
};