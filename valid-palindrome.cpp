class Solution {
public:
    bool isPalindrome(string s) {
        string check;
        int i=0;
        while(s[i]) {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                check+=s[i];
            } else if(s[i] >= 'A' && s[i] <= 'Z') {
                check+=(s[i]-'A'+'a');
            }
            i++;
        }
        int sz = check.size();
        bool ans = true;
        for(int i=0; i<sz/2; ++i) {
            if(check[i] != check[sz-i-1]) {
                ans = false;
            }
        }
        return ans;
    }
};
