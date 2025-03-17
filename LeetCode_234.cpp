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
    ListNode *Reverse(ListNode *Head)
    {
        ListNode *tmp=NULL;
        ListNode *Prev=NULL;
        ListNode *curr=Head;
        while(curr!=NULL)
        {
            tmp=curr->next;
            curr->next=Prev;
            Prev=curr;
            curr=tmp;
        }
        return Prev;

    }
    bool isPalindrome(ListNode* head) {
        ListNode * H =head;
        ListNode *T=head;
        while(H && H->next && H->next->next)
        {
            H=H->next->next;
            T=T->next;
        }
        if(H->next!=NULL)
        {
            T=T->next;
        }
        ListNode *M=Reverse(T);
        ListNode *C = head;
        while(M)
        {
            if(M->val!=C->val)
            {
                return false;
            }
            M=M->next;
            C=C->next;

        }
        return true;
    }
};