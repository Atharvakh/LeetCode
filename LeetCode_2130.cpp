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
    int pairSum(ListNode* head) {
        if(head == NULL)
        {
            return 0;
        }
        ListNode *Fast=head;
        ListNode *Slow=head;
        while(Fast && Fast->next)
        {
            Slow = Slow->next;
            Fast = Fast->next->next;
        }
        ListNode *curr = Slow;
        ListNode *prev = NULL;
        ListNode *next = NULL;
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev = curr;
            curr = next;
        }
        ListNode *p1 = head;
        ListNode *p2 = prev;
        int res = 0;
        while(p1 && p2)
        {
            res=max(res,p1->val+p2->val);
            p1=p1->next;
            p2=p2->next;
        }
        return res;
    }
};