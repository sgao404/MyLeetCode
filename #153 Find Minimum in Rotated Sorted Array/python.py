# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param {integer[]} nums
    # @return {TreeNode}
    def sortedArrayToBST(self, nums):
        if len(nums) == 0:
            return None
        return self.helper(nums,0,len(nums)-1)
    
    def helper(self,num,start,end):
        if start == end:
            return TreeNode(num[start])
        mid = (start+end)/2
        node = TreeNode(num[mid])
        node.left = self.helper(num,start,mid-1)
        node.right = self.helper(num,mid+1,end)
        return node