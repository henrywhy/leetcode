/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if(root == NULL) {
        return 0;
    }
    int maxLeft = maxDepth(root->left);
    int maxRight = maxDepth(root->right);
    return maxLeft >  maxRight ?  maxLeft+1 : maxRight+1;
}
