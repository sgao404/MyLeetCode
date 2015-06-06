public class Solution {
    public int minPathSum(int[][] grid) {
        if (grid == null) {return 0;}
        int row = grid.length;
        int col = grid[0].length;
        
        int [][] count = new int[row][col];
        count[0][0] = grid[0][0];  
        
        // first col
        for (int i = 1;i<col;i++) {
            count[0][i] = count[0][i-1]+grid[0][i];
        }
        // first row
        for (int j = 1; j<row;j++) {
            count[j][0] = count[j-1][0] + grid[j][0];
        }
        
        for (int i = 1;i<row;i++) {
            for (int j =1;j<col;j++){
                if (count[i-1][j] > count[i][j-1]) {
                    count[i][j] = count[i][j-1] + grid[i][j];
                }else {
                    count[i][j]=count[i-1][j]+grid[i][j];
                }
            }
        }
        return count[row-1][col-1];
    }
}