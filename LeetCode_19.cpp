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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Create a dummy node to handle the edge case of removing the head
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* curr = dummy;
        ListNode* prev = dummy;

        // Advance curr pointer n steps ahead
        for (int i = 0; i < n; ++i) {
            curr = curr->next;
        }

        // Move both pointers simultaneously until curr reaches the end
        while (curr->next != nullptr) {
            curr = curr->next;
            prev = prev->next;
        }

        // prev is now at the node before the one to be removed
        ListNode* to_remove = prev->next;
        prev->next = prev->next->next;
        delete to_remove; // Free the memory of the removed node

        // The new head is the next node of the dummy
        ListNode* newHead = dummy->next;
        delete dummy; // Free the memory of the dummy node

        return newHead;
    }
};