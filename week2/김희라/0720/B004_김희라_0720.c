#include <stdbool.h>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isSymmetricHelper(struct TreeNode* left, struct TreeNode* right) {
    if (left == NULL && right == NULL) return true;
    if (left == NULL || right == NULL) return false;

    return (left->val == right->val) && isSymmetricHelper(left->left, right->right) &&
           isSymmetricHelper(left->right, right->left);
}

bool isSymmetric(struct TreeNode* root) {
    if (root == NULL) return true;

    return isSymmetricHelper(root->left, root->right);
}
