class Solution {
public:
    bool checkRecord(string s) {
        int absent=0, late=0, globalLate=0;
        for(int i=0; s[i]; ++i) {
            if(s[i] == 'L') {
                ++late;
            } else {
                globalLate = max(late, globalLate);
                late=0;
                if(s[i] == 'A') {
                    ++absent;
                }
            }
        }
        globalLate = max(late, globalLate);
        return (absent<2 and globalLate<3);
    }
};
