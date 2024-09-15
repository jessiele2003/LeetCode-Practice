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
    TreeNode * first = NULL;
    TreeNode * last = NULL;
    TreeNode * middle = NULL;
    TreeNode * prev = NULL;
    void recoverTree(TreeNode* root) {
        prev = new TreeNode(INT_MIN);   //initialize with a minimum value node
        inorder_recur(root);
        if(first && last)
            swap(first->val, last->val);
        else if (first && middle)
            swap(first->val, middle->val);
    }

private:
    void inorder_recur(TreeNode * root) {
        if (!root) return;
        inorder_recur(root->left);
        if(prev != NULL && (root->val < prev->val)) {
            //first mistake
            if(!first) {
                //mark these two nodes as first and middle
                first = prev;
                middle = root;
            }
            else {
                //second mistake
                last = root;
            }
        }
        prev = root;
        inorder_recur(root->right);

    }
};