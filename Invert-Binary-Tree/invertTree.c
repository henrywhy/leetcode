/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    if(root == NULL) {
        return NULL;
    }
    struct TreeNode *head = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    head->val = root->val;
    head->left = invertTree(root->right);
    head->right = invertTree(root->left);
    
    return head;
}
