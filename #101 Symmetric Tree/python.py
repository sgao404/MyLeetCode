# From leetcode
class Solution:
    # @param {integer[][]} matrix
    # @return {void} Do not return anything, modify matrix in-place instead.
    def rotate(self, A):
        A[:] = zip(*A[::-1])
        