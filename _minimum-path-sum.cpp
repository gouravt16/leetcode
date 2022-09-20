class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int i,j;
        for(i=0; i<grid.size(); ++i) {
            for(j=0; j<grid[i].size(); ++j) {
                if(i==0) {                              // For first row, all the left values are added.
                    if(j>0) {
                        grid[i][j]+=grid[i][j-1];
                    }
                } else if(j==0) {                       // For first column, all the up values are added.
                        grid[i][j]+=grid[i-1][j];
                } else {                                // For rest of them, minimum of left or up value is taken and added.
                    grid[i][j]+=min(grid[i-1][j], grid[i][j-1]);
                }
            }
        }
        return grid[i-1][j-1];
    }
};
/*
Finding minimum path
grid[m][n] is transformed such that grid[i][j] will determine the minimum distance from grid[0][0].
*/
