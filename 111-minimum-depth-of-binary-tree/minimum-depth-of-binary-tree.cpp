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
    int minDepth(TreeNode* root) {
        if(!root) return 0;

        //if the subtree exists
        // current node has one child
        
        //if current node is null
        if(!root->left)
            return 1 + minDepth(root->right);   //plus one for the current node and the minimum of right subtree
        if(!root->right)
            return 1 + minDepth(root->left); //plus one for the current node and the minimum of left subtree

        //recursive call
        //if current node has both children
        //ensures that the function finds the shortest path to a leaf node
        return 1 + min(minDepth(root->right), minDepth(root->left));
    }
};