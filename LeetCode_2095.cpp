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
    ListNode* deleteMiddle(ListNode* head) 
    {
        if(!head || !head->next)
        {
            return nullptr;
        }
        ListNode *T =head;
        ListNode *H =head;
        ListNode *Temp =NULL;
        while(H && H->next)
        {
            Temp=T;
            T=T->next;
            H=H->next->next;
        }
        Temp->next=T->next;
        delete T;
        return head;
    }
};