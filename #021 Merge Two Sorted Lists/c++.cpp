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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        
        ListNode* head = new ListNode(0);
        ListNode* n = head;
        
        while (t1 && t2) {
            if (t1->val <= t2->val) {
                n->next = t1;
                t1 = t1->next;
            } else {
                n->next = t2;
                t2 = t2->next;
            }
            n = n->next;
        }
        if (t1) {n->next = t1;}
        if (t2) {n->next = t2;}
        
        return head->next;
    }
};