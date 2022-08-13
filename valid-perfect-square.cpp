class Solution {
public:
    bool isPerfectSquare(int x) {
        if(x == 0 || x == 1)
            return true;
        for(int i = 1; i<x; ++i) {
            if(x - i*i < i*2 + 1)
                return x == i*i;
        }
        return false;
    }
};
