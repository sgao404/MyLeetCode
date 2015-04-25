# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param {ListNode} head
    # @param {integer} val
    # @return {ListNode}
    def removeElements(self, head, val):
        top = ListNode(2312)
        top.next = head
        
        pre = top
        curr = head
        while curr != None:
            if curr.val == val:
                pre.next = curr.next
                curr = curr.next
            else:
                pre = pre.next
                curr = curr.next
        return top.next