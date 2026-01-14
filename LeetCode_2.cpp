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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* sum = head;   
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        int carry = 0;
        while(curr1 && curr2){
            int n1 = curr1->val;
            int n2 = curr2->val;
            int total = n1 + n2 + carry;
            int add = total % 10;
            carry = total / 10;
            sum->next = new ListNode(add);
        
            curr1 = curr1->next;
            curr2 = curr2->next;
            sum = sum->next;
        }
        while(curr1) {
            int total = curr1->val + carry;
            int add = total % 10;
            carry = total / 10;
            sum->next = new ListNode(add);
            curr1 = curr1->next;
            sum = sum->next;

        }
        while(curr2) {
            int total = curr2->val + carry;
            int add = total % 10;
            carry = total / 10;
            sum->next = new ListNode(add);
            curr2 = curr2->next;
            sum = sum->next;
        }
        while(carry>0)
        {
            int add = carry % 10;
            sum->next = new ListNode(add);
            carry = carry/10;
            sum = sum->next;
        }
        return head->next;
    }
};