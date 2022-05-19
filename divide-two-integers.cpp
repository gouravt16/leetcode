// https://leetcode.com/problems/divide-two-integers/

class Solution {
public:
    int divide(int dividend, int divisor) {
        
        bool positive = (dividend < 0 && divisor > 0 || dividend > 0 && divisor < 0)?false:true;
        
        long long D=abs(dividend);
        long long d=abs(divisor);
        
        long long temp=d,cn=1,ans=0;
        
        while(D>=temp) {
            temp = temp << 1;
            cn+=cn;
            if(temp>D) {
                D-=temp>>1;
                temp=d;
                ans+=cn>>1;
                cn=1;
            }
        }
        if(positive) {
            if(ans >= INT_MAX)
                return INT_MAX;
            else
                return ans;
        } else {
            if(ans <= INT_MIN)
                return INT_MIN;
            else
                return -ans;
        }
    }
};
