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
    ListNode* rotateRight(ListNode* head, int k) {
        int rotation,cnt=0;
        ListNode *p = head;
        while(p)
        {   
            cnt++;
            p = p->next;
        }
        if(cnt == 0) return 0;
        rotation = k%cnt;
        if(rotation==0) return head;
        int forward = cnt - rotation;
        forward -= 1;
        ListNode *slow = head;
        while(forward)
        {
            slow = slow -> next;
            forward--;
        }
        ListNode *nHead = slow->next;
        slow->next = NULL;
        ListNode *fast = nHead;
        while(fast && fast->next)
        {
            fast = fast->next;
        }
        fast->next = head;
        return nHead;
    }
};