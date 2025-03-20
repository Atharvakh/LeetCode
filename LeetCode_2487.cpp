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
    ListNode* reverseList(ListNode* head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode *temp=NULL;
        ListNode *prev=NULL;
        ListNode *curr=head;
        while(curr)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;

    }

    ListNode* removeNodes(ListNode* head) {
        ListNode *newhead = head;
        newhead=reverseList(newhead);
        ListNode *last = newhead;
        ListNode *temp=newhead->next;
        int maxl = newhead->val;
        while(temp!=NULL)
        {
            if(temp->val<maxl)
            {
                ListNode *curr = temp;
                temp = temp->next;
                last->next = temp;
            }
            else
            {
                maxl = max(maxl,temp->val);
                last = temp;
                temp=temp->next;
            }
        }
        newhead = reverseList(newhead);
        return newhead;
    }
};