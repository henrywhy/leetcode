/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *p, *c, *q;
    p = head;
    if(p==NULL) {
        return NULL;
    }
    c = p->next;
    if(c==NULL) {
        return p;
    }
    q = c->next;
    
    p->next = NULL;
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
