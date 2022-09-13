class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        int i,j;
        vector<vector<int>> ans(numRows);
        for(i=0; i<numRows; ++i) {
            vector<int> nested(i+1);
            for(j=0; j<=i; ++j) {
                if(j==0 || j==i) {
                    nested[j]=1;
                } else {
                    nested[j]=ans[i-1][j-1]+ans[i-1][j];
                }
            }
            ans[i]=nested;
        }
        return ans;
    }
};

Or

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        int i,j;
        vector<vector<int>> ans(numRows);   // determined number of rows of ans
        for(i=0; i<numRows; ++i) {
            ans[i].resize(i + 1);           // determined number of cols of ans
            for(j=0; j<=i; ++j) {
                if(j==0 || j==i) {
                    ans[i][j]=1;
                } else {
                    ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
                }
            }
        }
        return ans;
    }
};
