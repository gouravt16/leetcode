// https://leetcode.com/problems/valid-sudoku/
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; ++i) {
            for(int j=0; j<9; ++j) {
                if(board[i][j]!='.') {
                    // row & column
                    for(int x=0; x<9; ++x) {
                        if(x!=j && board[i][x] == board[i][j])
                            return false;
                        if(x!=i && board[x][j] == board[i][j])
                            return false;
                    }
                    // box
                    int x = i/3;
                    x*=3;
                    int lx=x+3;
                    for(; x<lx; ++x) {
                        int y = j/3;
                        y*=3;
                        int ly=y+3;
                        for(; y<ly; ++y) {
                            if(!(i==x && j==y)) {
                                if(board[i][j] == board[x][y])
                                    return false;
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};
