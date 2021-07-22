// https://leetcode.com/problems/longest-substring-without-repeating-characters
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="") 
            return 0;
        int i, maximum = -1, cn = 0;
        unordered_map<char, int> word;
        for(i=0; i<s.size(); ++i) {
            if(word.find(s[i]) == word.end()) {
                word[s[i]] = i;
                cn++;
            } else {
                maximum = max(maximum, cn);
                cn=0;
                i=word[s[i]];
                word.clear();
            }
        }
        return max(maximum,cn);
    }
};
