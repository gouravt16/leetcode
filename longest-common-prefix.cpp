class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        string first = strs[0];
        string ans;
        int first_size = first.size();
        for(int i=0; i<first_size; ++i) {
            for(auto x:strs) {
                if(first[i] != x[i]) {
                    return ans;
                }
            }
            ans+=first[i];
        }
        return ans;
    }
};
