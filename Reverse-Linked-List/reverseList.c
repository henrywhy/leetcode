/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *p, *c, *q;
    p = NULL;
    c = head;
    if(c==NULL) {
        return NULL;
    }
    q = c->next;
    
    while(1) {
        c->next = p;
        if(q==NULL) {
            break;
        }
        p = c;
        c = q;
        q = q->next;
    }
    
    return c;
}
