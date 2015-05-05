class Solution:
    # @param {integer[]} nums
    # @return {integer}
    def singleNumber(self, nums):
        t1 = 0
        t2 = 0
        t3 = 0
        for a in nums:
            t2 = t2 | (t1 & a);
            t1 = t1 ^ a;
            t3 = ~(t1 & t2);
            t1 = t1 & t3;
            t2 = t2 & t3;
        return t1;