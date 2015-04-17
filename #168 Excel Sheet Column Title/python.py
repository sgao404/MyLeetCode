class Solution:
    # @param s, a string
    # @return an integer
    def titleToNumber(self, s):
        n = 0
        for i in range(0,len(s)):
            n = n * 26 + ord(s[i]) - 64
        return n