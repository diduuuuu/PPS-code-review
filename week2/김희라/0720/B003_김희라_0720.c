/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sumOfLeftLeaves(struct TreeNode *root) {
  if (root == NULL)
    return 0;

  int sum = 0;
  if (root->left != NULL) {
    if (root->left->left == NULL && root->left->right == NULL) {
      sum += root->left->val; // 왼쪽 자식이 말단 노드인 경우 더함
    } else {
      sum += sumOfLeftLeaves(root->left); // 왼쪽 자식 노드를 순회하여 더함
    }
  }
  sum += sumOfLeftLeaves(root->right); // 오른쪽 자식 노드를 순회하여 더함

  return sum;
}