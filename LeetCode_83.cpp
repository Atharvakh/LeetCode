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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        ListNode* pre=head;
        ListNode* temp=head->next;
        while(temp!=NULL){
            if(temp->val==pre->val){
                ListNode* temp2=temp;
                pre->next=temp->next;
                temp=temp->next;
                delete(temp2);
            }else{
                pre=pre->next;
                temp=temp->next;
            }
        }
        return head;
    }
};