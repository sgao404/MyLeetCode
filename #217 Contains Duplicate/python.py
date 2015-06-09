class Solution:
    # @param {integer[]} nums
    # @return {boolean}
    def containsDuplicate(self, nums):
        if nums == None or len(nums) == 0:
            return False
        
        return (len(set(nums)) < len(nums))