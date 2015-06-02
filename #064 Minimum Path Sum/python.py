class Solution:
    # @param {integer[][]} grid
    # @return {integer}
    def minPathSum(self, grid):
        if grid == None:
            return 0
        row = len(grid)
        col = len(grid[0])
        
        count = [[0 for x in range(col)] for x in range(row)]
        
        # first col
        for i in range(1,col):
            count[0][i] = count[0][i-1]+grid[0][i]
        
        # first row
        for j in range(1,row):
            count[j][0] = count[j-1][0] + grid[j][0]
        
        for i in range(1,row):
            for j in range(1,col):
                if count[i-1][j] > count[i][j-1]:
                    count[i][j] = count[i][j-1] + grid[i][j]
                else:
                    count[i][j]=count[i-1][j]+grid[i][j]
                
        return count[row-1][col-1];