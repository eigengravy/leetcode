/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if (root->left == nullptr && root->right == nullptr) {
            return true;
        } else if (root->left != nullptr && root->left != nullptr) {
            if (root->left->val >= root->val) {
                return false;
            }
            if (root->right->val < root->val) {
                return false;
            }
            return isValidBST(root->left) && isValidBST(root->right);
        } else {
            return false;
        }
    }
};