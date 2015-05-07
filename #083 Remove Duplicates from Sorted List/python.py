class Solution:
    # @param {integer[]} nums
    # @return {integer}
    def maxSubArray(self, nums):
        res = nums[0]
        newsum = nums[0]
        
        for i in range(1,len(nums)):
            newsum = max(newsum+nums[i],nums[i])
            res = max(res,newsum)
        
        return res
        
       