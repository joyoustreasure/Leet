/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode p1_dummy;
    struct ListNode p2_dummy;
    
    struct ListNode* p1 = &p1_dummy;
    struct ListNode* p2 = &p2_dummy;

    struct ListNode* cur = head;

    while (cur != NULL) {
        if (cur->val < x) {
            p1->next = cur;
            p1 = p1->next;
        } 
        else {
            p2->next = cur;
            p2 = p2->next;
        }

        cur = cur->next;
    }

    p2->next = NULL;

    p1->next = p2_dummy.next;

    return p1_dummy.next;
}
