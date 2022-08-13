class Solution {
public:
    int mySqrt(int x) {
        if(x == 0)
            return x;
        for(int i = 1; i<x; ++i) {
            if(x - i*i < i*2 + 1)
                return i;
        }
        return 1;
    }
};

/*
1*1 = 1
          difference = 3
2*2 = 4
          difference = 5
3*3 = 9
          difference = 7
4*4 = 16
          difference = 9
5*5 = 25
          difference = 11
6*6 = 36
          difference = 13
7*7 = 49

So at any point difference is 2*i+1

x = 14

14 - 3*3 < 7 // true

15 - 3*3 < 7 // true

16 - 3*3 < 7 // false
then
16 - 4*4 < 9 // true
...
*/
