class Solution {
public:
    bool isHappy(int n) {
        
        unordered_map<int, int> check;
        while(check[n]==0) {
            check[n]=n;
            int a=0;
            while(n) {
                a+=pow(n%10,2);
                n/=10;
            }
            if(a==1)
                return true;
            n=a;
        }
        return false;
    }
};
