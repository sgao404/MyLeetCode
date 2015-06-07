class Solution:
    # @param {integer[]} height
    # @return {integer}
    def maxArea(self, height):
        if len(height) < 2：
            return 0
        
        maxx = 0
        left = 0
        right = len(height) -1 ;
        
        while left < right:
            maxx = max(maxx,(right-left) * min(height[left],height[right]))
            if height[left] < height[right]:
                left++
            else:
                right--
        
        return maxx