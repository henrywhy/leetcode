/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if(head == NULL) {
        return false;
    }
    struct ListNode *slow = head;
    
    while(1) {
       if(head->next == NULL) {
            return false;
       }
       if((head = head->next->next) == NULL) {
           return false;
       }
       
       slow = slow->next;
       
       if(head == slow) {
           return true;
       }
    }
}
