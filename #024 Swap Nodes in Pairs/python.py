# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param {ListNode} head
    # @return {ListNode}
    def swapPairs(self, head):
        newHead = ListNode(0)
        newHead.next = head
        n1 = newHead
        n2=head
    
        while(n2!=None and n2.next!=None):
            temp = n2.next.next
            n2.next.next=n1.next
            n1.next=n2.next
            n2.next=temp
            n1=n2
            n2=n1.next
        
        return newHead.next