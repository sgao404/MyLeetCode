class Solution:
    # @param {integer} n
    # @return {integer}
    def climbStairs(self, n):
        if n<=2:
            return n
        s1 = 1;
        s2 = 2;
        for i in range(3,n+1):
            s2 = s1 + s2;
            s1 = s2 - s1;
        
        return s2;