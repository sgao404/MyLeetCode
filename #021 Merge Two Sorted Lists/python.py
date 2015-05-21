class Solution:
    # @param {integer[]} nums
    # @return {integer}
    def findMin(self, nums):
        ans = nums[0]
        size = len(nums)
        start = 0
        end = size - 1
        while start <= end:
            mid = (start + end) / 2
            if nums[mid] <= nums[end]:
                end = mid - 1
            else: 
                start = mid + 1
            ans = min(ans, nums[mid])
        return ans