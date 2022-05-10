// https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    
    bool lessOrNot(string m, string n) {
        if(m.size() == n.size()) {
            for(int i=0; i<m.size(); ++i) {
                if(m[i] > n[i]) {
                    return true;
                } else if(i==m.size()-1 && m[i] == n[i]) {
                    return true;
                } else if(m[i] < n[i]) return false;
            }
        }
        return true;
    }
    
    int reverse(int x) {
        bool positive = x<0?false:true;
        string n,m = to_string(x);
        int limit = positive?0:1;
        for(int i=m.size()-1; i>=limit; --i) {
                n+=m[i];
        }
        // cout << n << endl;
        if(positive && lessOrNot("2147483647",n))
            return stoi(n);
        else if(!positive && lessOrNot("2147483648",n))
            return -stoi(n);
        else return 0;
    }
};
