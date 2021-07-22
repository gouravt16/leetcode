// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int i=0,j=col-1,ans=0;
        while(i<row && j>=0) {
            if(grid[i][j]>=0){
                i++;
                ans+=(j+1);
            } else {
                j--;
            }
        }
        return row*col-ans;
    }
};
