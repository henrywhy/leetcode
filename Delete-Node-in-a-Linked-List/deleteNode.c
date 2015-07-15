/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode * temp = node->next;
    if(temp == NULL) {
        return ;
    }
    
    node->val = temp->val;
    node->next = temp->next;
    free(temp);
}
