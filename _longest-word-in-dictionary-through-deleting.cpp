class Solution {
public:
    
    bool compare(string s, string x) {
        
        int i=0,j=0;
        for(; i<s.size(); ++i) { // This can be modified. we can loop through x.size() and modify the logic
            if(s[i] == x[j]) {
                ++j;
            }
            if(j == x.size())
                return true;
        }
        return false;
    }
    string findLongestWord(string s, vector<string>& dictionary) {
        
        map<int, priority_queue<string, vector<string>, greater<string>>, greater<int>> m;
        for(auto x:dictionary) {
            m[x.size()].push(x);
        }
        
        for(auto [a,b]:m) {
            while(!b.empty()) {
                
                if(compare(s,b.top())) {
                    return b.top();
                }
                b.pop();
            }
        }
        return "";
    }
};
