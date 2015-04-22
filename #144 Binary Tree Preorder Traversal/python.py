# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution: # recursive version
    # @param root, a tree node
    # @return a list of integers
    def preorderTraversal(self, root):
        if root == None: return [] 
        return [root.val] + self.preorderTraversal(root.left) + self.preorderTraversal(root.right)

class Solution: # iteratively
    # @param root, a tree node
    # @return a list of integers
    def preorderTraversal(self, root):
        result = []
        
        if root == None:
            return result
        
        nodeStack = []
        nodeStack.append(root)
        
        while len(nodeStack) != 0:
            node = nodeStack.pop()
            result.append(node.val)
            
            if node.right != None:
                nodeStack.append(node.right)
            
            if node.left != None:
                nodeStack.append(node.left)
            
        return result