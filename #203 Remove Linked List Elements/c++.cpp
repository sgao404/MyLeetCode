/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution { // Iteratively
public:
    ListNode* removeElements(ListNode* head, int val) {

        ListNode *top = new ListNode(123123); 
        top->next = head;
        
        ListNode *pre = top; 
        ListNode *curr = head;
        while (curr!=NULL) {
            if(curr->val == val) {
                pre->next = curr->next;
                curr = curr->next;
            } else {
                pre=pre->next;
                curr = curr->next;
            }
        }
        return top->next;
    }
};

class Solution {  // Recursively
public:
    ListNode* removeElements(ListNode* head, int val) {

        if (head == NULL) return NULL;
        head->next = removeElements(head->next, val);
        return head->val == val ? head->next : head;
    }
};