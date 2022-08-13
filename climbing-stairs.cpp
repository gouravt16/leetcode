class Solution {
public:
    int climbStairs(int n) {
        if(n == 1 || n == 2)
            return n;
        int ans = 1;
        int first = 1, second = 2;
        for(int i=3; i<=n; ++i) {
            ans = first+second;
            first = second;
            second = ans;
        }
        return ans;
    }
};
