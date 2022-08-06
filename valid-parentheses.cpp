class Solution {
public:
    bool isValid(string s) {
        stack<char> par;
        for(auto x:s) {
            if(x == '(' || x == '{' || x == '[') {
                par.push(x);
            } else if(!par.empty() &&( (x == ')' && par.top() == '(') || (x == '}' && par.top() == '{') || (x == ']' && par.top() == '[')) ){
                par.pop();
            } else {
                return false;
            }
        }
        return par.empty();
    }
};
