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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        // Use unordered_set for efficient lookups
        unordered_set<int> st(nums.begin(), nums.end());
        
        // Skip initial nodes that need to be removed
        while (head && st.count(head->val)) {
            head = head->next;
        }
        
        // Initialize the new head
        ListNode* curr = head;

        // Traverse the remaining list
        while (curr && curr->next) {
            if (st.count(curr->next->val)) {
                curr->next = curr->next->next; // Remove the node
            } else {
                curr = curr->next; // Move to the next node
            }
        }

        return head;
    }
};