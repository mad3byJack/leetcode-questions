// Last updated: 10/08/2026, 10:52:09 pm
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool checkTree(struct TreeNode* root) {
    if (root->left->val + root->right->val == root->val) {
        return true;
    } else {
        return false;
    }
}