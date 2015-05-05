class Solution: # use sort
    # @param {integer[]} nums
    # @return {integer}
    def majorityElement(self, nums):
        nums.sort()
        return nums[len(nums)/2]

class Solution: # use dictionary
    # @param {integer[]} nums
    # @return {integer}
    def majorityElement(self, nums):
        dict = {}
        for n in nums:
            dict[n] = dict.get(n,0) +1
            if dict[n] > len(nums)/2:
                return n