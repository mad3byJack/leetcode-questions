// Last updated: 21/08/2026, 10:04:43 pm
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int recurse(struct TreeNode* node, int low, int high) {
    int add = 0;
    if (node->left != NULL) {
        int val = node->left->val;
        if (val >= low && val <= high) {
            add += val;
        }
        add += recurse(node->left, low, high);
    }
    if (node->right != NULL) {
        int val = node->right->val;
        if (val >= low && val <= high) {
            add += val;
        }
        add += recurse(node->right, low, high);
    }
    return add;
}

int rangeSumBST(struct TreeNode* root, int low, int high) {
    int sum = 0;
    if (root->val >= low && root->val <= high) {
        sum += root->val;
    }
    
    sum += recurse(root, low, high);
    return sum;
}