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
    vector<string> result;
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root)
            return {};
        string temp;
        path_recursive(root, temp);
        return result;
    }

    void path_recursive(TreeNode * root, string temp) {
        if(!root) {
            return;
        }
        temp = temp + to_string(root->val);
        if(!root->left && !root->right) {
            result.push_back(temp);
        }
        else
            temp += "->";
        path_recursive(root->left, temp);
        path_recursive(root->right, temp);
    }
};