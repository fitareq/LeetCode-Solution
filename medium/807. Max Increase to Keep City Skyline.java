class Solution {
    public int maxIncreaseKeepingSkyline(int[][] grid) {
        int n = grid.length, result = 0;
        int[] rMax = new int[n]; 
        int[] cMax = new int[n]; 
        
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
            {
                rMax[i] = Math.max(rMax[i], grid[i][j]);
                cMax[j] = Math.max(cMax[j], grid[i][j]);
            }
        
        
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
            {
                result += Math.min(rMax[i], cMax[j]) - grid[i][j];
            }
        
        return result;
    }
}