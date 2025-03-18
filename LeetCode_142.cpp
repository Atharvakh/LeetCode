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
    ListNode *detectCycle(ListNode *head) {
        ListNode *H=head;
        ListNode *T=head;
        while(H && H->next)
        {
            T=T->next;
            H=H->next->next;
            if(H==T)
            {
                break;
            }
        }
        if(H==NULL || H->next==NULL)
        {
            return NULL;
        }
        T=head;
        while(T!=H)
        {
            T=T->next;
            H=H->next;
        }
        return T;
        
    }
};