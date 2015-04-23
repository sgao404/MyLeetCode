/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution { // recursively
    public ListNode removeElements(ListNode head, int val) {
        if (head == null) return null;
        head.next = removeElements(head.next, val);
        return head.val == val ? head.next : head;
    }
}

public class Solution { // iteratively
    public ListNode removeElements(ListNode head, int val) {
        ListNode top = new ListNode(1111); 
        top.next = head;
        
        ListNode pre = top; 
        ListNode curr = head;
        while (curr!=null){
            if(curr.val==val){
                pre.next=curr.next;
                curr=curr.next;
            } else{
            pre=pre.next;
            curr=curr.next;
            }
        }   
        return top.next;
    }
};