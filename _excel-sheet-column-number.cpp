class Solution {
public:
    int titleToNumber(string s) {
        if(s.size() == 1)
            return s[0]-'A'+1;
        return 26*(titleToNumber(s.substr(0,s.size()-1)))-'A'+1+s[s.size()-1];
        /*
        switch(s.size()) {
            case 1: return s[0]-'A'+1;
            case 2: return 26*(s[0]-'A'+1)+s[1]-'A'+1;
            case 3: return 26*(26*(s[0]-'A'+1)+s[1]-'A'+1)+s[2]-'A'+1;
            case 4: return 26*(26*(26*(s[0]-'A'+1)+s[1]-'A'+1)+s[2]-'A'+1)+s[3]-'A'+1;
            case 5: return 26*(26*(26*(26*(s[0]-'A'+1)+s[1]-'A'+1)+s[2]-'A'+1)+s[3]-'A'+1)+s[4]-'A'+1;
            case 6: return 26*(26*(26*(26*(26*(s[0]-'A'+1)+s[1]-'A'+1)+s[2]-'A'+1)+s[3]-'A'+1)+s[4]-'A'+1)+s[5]-'A'+1;
            case 7: return 26*(26*(26*(26*(26*(26*(s[0]-'A'+1)+s[1]-'A'+1)+s[2]-'A'+1)+s[3]-'A'+1)+s[4]-'A'+1)+s[5]-'A'+1)-'A'+1+s[6];
        } */
      
        /*
        int result = 0;
        for(auto c : columnTitle) {
            result = result * 26 - 'A' + 1 + c; // (-'A'+1) + c will generate index // - will not allow int to exceed.
        }
        return result;
        */
    }
};
