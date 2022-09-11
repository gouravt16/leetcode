class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> u;        
        unordered_map<string, char> v;

        vector<string> mapping;
        int first=0,z=0;
        for(int i=0; i<s.size(); ++i) {
            if(s[i] == ' ') {
                mapping.push_back(s.substr(first, z));
                z=0;
                first=i+1;
            } else {
                ++z;
            }
        }
        if(z){
            mapping.push_back(s.substr(first,z));
        }
        if(pattern.size() != mapping.size())
            return false;
        for(int i=0; pattern[i]; ++i) {
            if(u[pattern[i]]!="") {
                if(u[pattern[i]] != mapping[i]) {
                    return false;
                }
            } else if(v[mapping[i]]) {
                if(v[mapping[i]]!=pattern[i]) {
                    return false;
                }
            } else {
                u[pattern[i]]=mapping[i];
                v[mapping[i]]=pattern[i];
            }
        }
        return true;
    }
};
