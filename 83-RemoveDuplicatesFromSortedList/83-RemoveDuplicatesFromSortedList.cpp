// Last updated: 03/10/2026, 2:57:39 pm
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) return NULL;
        if (head->next == NULL) return head;
        if (head->next->val == head->val) {
            head->next = head->next->next;
            deleteDuplicates(head);
        }
        deleteDuplicates(head->next);
        return head;
    }
};