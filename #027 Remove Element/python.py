class Solution:
    # @param {integer[]} nums
    # @param {integer} val
    # @return {integer}
    def removeElement(self, nums, val):
        i = 0
        j = 0
        
        while j < len(nums):
            if nums[j] != val:
                nums[i] = nums[j]
                i+=1
            j+=1
        
        return i