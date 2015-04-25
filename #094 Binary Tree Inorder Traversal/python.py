# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution: # Recursively
    # @param root, a tree node
    # @return a list of integers
    def inorderTraversal(self, root):
        if root == None: return [] 
        return self.preorderTraversal(root.left) + [root.val] +  self.preorderTraversal(root.right)

class Solution: # Iteratively
    # @param root, a tree node
    # @return a list of integers
    def inorderTraversal(self, root):
        result = []
        
        if root == None:
            return result
        
        nodeStack = []
        p = root
        
        while len(nodeStack) != 0 or p != None:
            if p != None:
                nodeStack.append(p)
                p = p.left

            else:
                p = nodeStack.pop()
                result.append(p.val)
                p = p.right
 
        return result