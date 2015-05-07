/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution { // Iteratively
    public ListNode reverseList(ListNode head) {                                                                                                    if (null == head) {return null;}
        
        ListNode curr = head;
        ListNode prev = null;
        
        while (curr != null) {
            ListNode next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
            
        head = prev;
        return head;                                                                                                                        
        
    }
}

public class Solution { // recursively
    public ListNode reverseList(ListNode head) {                                                                                                    if (head == null)
		if (head == null)	
			return null;
 
		if (head.next == null)
			return head;
 
		ListNode newHead = reverseList(head.next);
		head.next.next = head;
		head.next = null;
		
		return newHead;                                                                                                                        
        
    }
}