# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param {ListNode} l1
    # @param {ListNode} l2
    # @return {ListNode}
    def mergeTwoLists(self, l1, l2):
        t1 = l1
        t2 = l2
        
        head = ListNode(0)
        n = head
        
        while (t1!=None && t2!=None):
            if t1.val <= t2.val:
                n.next = t1
                t1 = t1.next
            else:
                n.next = t2
                t2 = t2.next
            
            n = n.next;
        
        if (t1!=None): 
            n.next = t1
        if (t2!=None): 
            n.next = t2
        
        return head.next;