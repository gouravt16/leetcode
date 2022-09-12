class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int s_size = s.size();
        unordered_map<string, int> u;
        vector<string> ans;
        for(int i=0; i<=s_size-10; ++i) {
            u[s.substr(i, 10)]++;
        }
        for(auto [key, value]:u) {
            if(value > 1) {
                ans.push_back(key);
            }
        }
        return ans;
    }
};
