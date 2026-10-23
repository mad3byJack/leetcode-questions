// Last updated: 23/10/2026, 5:27:25 pm
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) return NULL;
        TreeNode *curr = root;
        int a;
        int b;
        if (p->val > q->val) {
            b = p->val;
            a = q->val;
        }
        else {
            a = p->val;
            b = q->val;
        }
        while (curr != NULL) {
            if (b < curr->val) {
                curr = curr->left;
            }
            else if (a > curr->val) {
                curr = curr->right;
            }
            else return curr;
        }
        return NULL;
    }
};