# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param root, a tree node
    # @return an integer
    def maxDepth(self, root):
        if root == None:
            return 0
        q = []
        q.append([root, 1])
        res = 0
        while len(q) != 0:
            node, dep = q.pop()
            res = max(res, dep)
            if node.left != None:
                q.append([node.left, dep + 1])
            if node.right != None:
                q.append([node.right, dep + 1])
        return res