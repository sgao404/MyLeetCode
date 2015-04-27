# Definition for binary tree with next pointer.
# class TreeLinkNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
#         self.next = None

class Solution:
    # @param root, a tree link node
    # @return nothing
    def connect(self, root):
        if root == None: return
        visitedNum = 0
        queue = collections.deque()
        queue.append(root)
        while queue:
            curr = queue.popleft()
            visitedNum += 1
            if curr.left:
                queue.append(curr.left)
                queue.append(curr.right)
            curr.next = None if visitedNum & (visitedNum + 1) == 0 else queue[0]
        