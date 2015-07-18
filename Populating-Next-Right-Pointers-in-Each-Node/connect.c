/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  struct TreeLinkNode *left, *right, *next;
 * };
 *
 */
void connect(struct TreeLinkNode *root) {
    if(root == NULL || root->left == NULL) {
        return;
    }
    root->left->next = root->right;
    root->right->next = root->next == NULL ? NULL : root->next->left;
    connect(root->left);
    connect(root->right);
}
