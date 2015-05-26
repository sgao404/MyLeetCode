class Solution:
    # @param {integer[]} nums
    # @return {void} Do not return anything, modify nums in-place instead.
    def sortColors(self, nums):
        r = 0
        w = 0
        b = 0
    
        for i in range(len(nums)):
            if nums[i] == 0:
                r+=1
                break
                
            if nums[i] == 1:
                w+=1
                break
                
            if nums[i] == 2:
                b+=1
                break
            
        for i in range(len(nums)):
            if r>0:
                nums[i]=0
                r-=1
                continue
            
            if w>0:
                nums[i]=1
                w-=1
                continue
            
            nums[i]=2