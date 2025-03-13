class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *T = head;
        ListNode *H = head;
        while(H && H->next)
        {
            T=T->next;
            H=H->next->next;
        }
        return T;
    }
};