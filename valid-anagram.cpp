class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> one, two;
        for(auto x:s) {
            one[x]++;
        }
        for(auto y:t) {
            two[y]++;
        }
        if(one.size() == two.size()) {
            for(auto [a,b]:one) {
                if(one[a] != two[a]) {
                    return false;
                }
            }
        } else {
            return false;
        }
        return true;
    }
};
