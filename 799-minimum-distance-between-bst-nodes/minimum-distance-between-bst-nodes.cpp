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
    int minDiffInBST(TreeNode* root) {
        if(!root) return 0;
        int min_diff = INT_MAX;
        TreeNode * prev = NULL;
        min_recursive(root, prev, min_diff);
        return min_diff;
    }

    void min_recursive(TreeNode * root, TreeNode * &prev, int & min_diff) {
        if(!root)   return;
        min_recursive(root->left, prev, min_diff);
        if(prev != NULL) {
            min_diff = min(min_diff, (root->val - prev->val));
        }
        prev = root;
        min_recursive(root->right, prev, min_diff);

    }
};