class Solution {
public:
    double myPow(double x, long long n) {
        double ans=1;
        long long abs_a=abs(n);
        if(n==0 || x==1) {
            return 1;
        }
        if(x == -1)
            return n&1?-1:1;
        for(long long i=1; i<=abs_a; ++i) {
            ans*=x;
            if(ans>100000) {
                return 0;
            }
        }
        return n>0?ans:1/ans;
    }
};
