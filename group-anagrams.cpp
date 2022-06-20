class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> u;
        for(auto str: strs) {
            string x = str;
            sort(str.begin(), str.end());
            vector<string> temp = u[str];
            temp.push_back(x);
            u[str] = temp;
        }
        
        vector<vector<string>> ans;
        for(auto x: u) {
            vector<string> s;
            for(auto y:x.second) {
                s.push_back(y);
            }
            ans.push_back(s);
        }
        return ans;
    }
};
