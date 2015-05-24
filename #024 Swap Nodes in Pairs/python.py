class Solution:
    # @param {integer} m
    # @param {integer} n
    # @return {integer}
    def uniquePaths(self, m, n):
        if m == 1 or n == 1:
            return 1
        a = [[0 for x in range(n)] for x in range(m)] 
        a[0][0] = 1
        for i in range(m):
            a[i][0] = 1
        for i in range(n):
            a[0][i] = 1
        
        for i in range(1,m):
            for j in range(1,n):
                a[i][j] = a[i][j-1] + a[i-1][j]
        
        return a[m-1][n-1]