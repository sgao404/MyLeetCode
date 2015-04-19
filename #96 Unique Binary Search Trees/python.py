class Solution:
    # @param n, an integer
    # @return an integer
    def numTrees(self, n):
        count = [0] * (n+1)
        count[0] = 1
        for i in range(1,n+1):
        	for j in range(0,i):
        		count[i] += count[j] * count[i-j-1]
        		j += 1
        	i+=1
        return count[n]
