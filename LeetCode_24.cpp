class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *temp = new ListNode(0,head);
        ListNode *point = temp;
        while(point->next && point->next->next)
        {
            ListNode *swap1 = point->next;
            ListNode *swap2 = point->next->next;

            swap1->next = swap2->next;
            swap2->next = swap1;
            point->next = swap2;

            point = swap1;
        }
        return temp->next;
    }
};