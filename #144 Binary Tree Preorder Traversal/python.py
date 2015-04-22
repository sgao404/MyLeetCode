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
        result = []
        
        if root != None:  
            result.append(root.val)  
              
            left = self.preorderTraversal(root.left)  
            result.extend(left)  
              
            right = self.preorderTraversal(root.right)  
            result.extend(right)  
        return result