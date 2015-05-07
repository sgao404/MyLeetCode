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
    ListNode* reverseList(ListNode* head) {  // iteratively
        if (!head) {return NULL;}
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
            
        head = prev;
        return head;
    }
};

class Solution { // recursively
public:
    ListNode* reverseList(ListNode* head) {
        if (!head)	return NULL;
 
		if (!head->next) return head;
 
		ListNode* newHead = reverseList(head->next);
		head->next->next = head;
		head->next = NULL;
		
		return newHead; 
    }
};