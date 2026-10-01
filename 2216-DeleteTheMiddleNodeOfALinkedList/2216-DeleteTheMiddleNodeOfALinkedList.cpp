// Last updated: 01/10/2026, 1:09:11 pm
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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *curr = head;
        int count = 0;
        while (curr != NULL) {
            count ++;
            curr = curr->next;
        }
        if (count == 1) return NULL;
        int n = count / 2;
        curr = head;
        for (int i = 1; i < n; i++) {
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return head;
    }
};