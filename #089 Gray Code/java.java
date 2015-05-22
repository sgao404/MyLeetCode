/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode t1 = l1;
        ListNode t2 = l2;
        
        ListNode head = new ListNode(0);
        ListNode n = head;
        
        while (t1!=null && t2!=null) {
            if (t1.val <= t2.val) {
                n.next = t1;
                t1 = t1.next;
            } else {
                n.next = t2;
                t2 = t2.next;
            }
            n = n.next;
        }
        if (t1!=null) {n.next = t1;}
        if (t2!=null) {n.next = t2;}
        
        return head.next;
    }
}