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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)
            return 0;
        if(!root->left && !root->right)
            return 0;
        int sum = 0;
        return sum_recursive(root, sum);
    }

    int sum_recursive(TreeNode * root, int & sum) {
        if(!root) return 0;
        if(check_leaf(root->left)) {
            sum += root->left->val;
        }

        sum_recursive(root->left, sum);
        sum_recursive(root->right, sum);
        return sum;
    }

    int check_leaf(TreeNode * root) {
        if(!root) return 0;
        if(!root->left && !root->right) return 1;
        return 0;
    }
};