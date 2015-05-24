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
    ListNode* swapPairs(ListNode* head) {
        ListNode* newHead = new ListNode(0);
        newHead->next = head;
        ListNode* n1 = newHead;
        ListNode* n2=head;
        
        while(n2 && n2->next){
            ListNode* temp = n2->next->next;
            n2->next->next=n1->next;
            n1->next=n2->next;
            n2->next=temp;
            n1=n2;
            n2=n1->next;
        }
        
        return newHead->next;
    }
};