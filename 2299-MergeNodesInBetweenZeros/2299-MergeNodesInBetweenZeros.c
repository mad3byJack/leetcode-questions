// Last updated: 13/08/2026, 12:12:35 am
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeNodes(struct ListNode* head) {
    int sum = 0;
    struct ListNode *last_zero = NULL;
    struct ListNode *curr = head;
    while (curr != NULL) {
        if (curr->val == 0) {
            if (last_zero != NULL) {
                last_zero->val = sum;
                sum = 0;
                last_zero->next = curr;
            }
            if (curr->next != NULL) {
                last_zero = curr;
            }
        } else {
            sum += curr->val;
        }
        curr = curr->next;
    }
    last_zero->next = NULL;
    return head;
}

// iterate through every node
// while iterating keep sum of all nodes until 0
// when we find node with value 0 assign other linked list node with sum value