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
        vector<int> result;
        if(!root)
            return {};
        preorder_recursive(root, result);
        return result;
    }

    void preorder_recursive(TreeNode * root, vector<int> & result) {
        if(!root) return;
        result.push_back(root->val);
        preorder_recursive(root->left, result);
        preorder_recursive(root->right, result);
    }
};