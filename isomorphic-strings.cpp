class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> iso;
        unordered_map<char, char> ito;

        int s_size = s.size();
        for(int i=0; i<s_size; ++i) {
            if(iso.find(s[i]) == iso.end()) {
                iso[s[i]] = t[i];
            } else { 
                if(iso[s[i]] != t[i])
                    return false;
            }
            if(ito.find(t[i]) == iso.end()) {
                ito[t[i]] = s[i];
            } else { 
                if(ito[t[i]] != s[i])
                    return false;
            }
        }
        return true;
    }
};
