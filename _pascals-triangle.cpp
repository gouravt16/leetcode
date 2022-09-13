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
