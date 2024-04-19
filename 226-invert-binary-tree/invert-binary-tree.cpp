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
    TreeNode* invertTree(TreeNode* root) {
        if(!root)   return NULL;
        return root = invert_recursion(root);
    }

    TreeNode * invert_recursion(TreeNode * root) {
        if(!root)   return root;
        TreeNode * temp = root->left;
        root->left = root->right;
        root->right = temp;
        invert_recursion(root->left);
        invert_recursion(root->right);
        return root;
    }
};