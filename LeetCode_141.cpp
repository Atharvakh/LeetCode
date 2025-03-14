/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *H=head;
        ListNode *T=head;
        while(H && H->next!=NULL)
        {
            T=T->next;
            H=H->next->next;
            if(T==H)
            {
                return true;
            }
        }
        return false;
    }
};