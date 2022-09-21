class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int ans=INT_MIN,i,n=values.size();
        vector<int> a,b;
        for(i=0; i<n; ++i) {
            a.push_back(values[i]+i);
            b.push_back(values[i]-i);
        }
        vector<int> dp(n+1);
        dp[n] = INT_MIN;
        for(i=n-1; i>0; --i) {
            dp[i] = max(dp[i+1], b[i]);
        }
        for(i=0; i<n-1; ++i) {
            ans = max(ans, a[i]+dp[i+1]);
        }
        return ans;
    }
};
/*
For [8,1,5,2,6] example, we have created 2 arrays
a: [8,2,7,5,10] by values[i]+i
b: [8,0,3,-1,2] by values[i]-i
To find values[i]+i+values[j]-j, we need to pick index i(one by one) from array a & index j(max element) from array b
we are storing the max element in dp array.
*/
