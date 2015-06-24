# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:  # recursively
    # @param {TreeNode} root
    # @return {TreeNode}
    def invertTree(self, root):
        if (root != None):
            self.invertTree(root.left)
            self.invertTree(root.right)
            self.swap(root)
        return root

    
    def swap(self, root):
        temp = TreeNode(1)
        temp = root.left
        root.left = root.right
        root.right = temp

        