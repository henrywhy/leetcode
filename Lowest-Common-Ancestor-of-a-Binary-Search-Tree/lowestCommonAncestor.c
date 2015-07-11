/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    struct TreeNode *current = root;
    while(true) {
        if((current->val - p->val) * (current->val - q->val) <= 0) {
            return current;
        }
        
        if(current->val > p->val) {
            current = current->left;
        } else {
            current = current->right;
        }
    }
}
