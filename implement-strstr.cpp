class Solution {
public:
    int strStr(string S, string s) {
        if(s.size() == 0)
            return 0;
        int S_size = S.size(), j=0, s_size = s.size();
        for(int i=0; i<S_size; ++i) {
            if(S[i] == s[j]) {
                j++;
                if(j == s_size) {
                    return i-j+1;
                }
            } else {
                i-=j;
                j=0;
            }
        }
        return -1;
    }
};
