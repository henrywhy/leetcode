/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL) {
        return head;
    }
    struct ListNode * current = head;
    struct ListNode * temp = head->next;
    while(temp != NULL) {
        if(temp->val == current->val) {
            current->next = temp->next;
            free(temp);
            temp = current->next;
        } else {
            current = temp;
            temp = current->next;
        }
    }
    return head;
}
