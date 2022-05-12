// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

class Solution {
public:
    vector<string> multiply(string x, vector<string> y) {
        vector<string> tmp;
        // cout << y.size();
        for(int i=0; i<x.size(); ++i) {
            if(y.size() == 0) {
                string z;
                z+=x[i];
                tmp.push_back(z);
            } else
            for(int j=0; j<y.size(); ++j) {
                tmp.push_back(y[j]+x[i]);
            }
        }
        return tmp;
    }
    
    
    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;
        unordered_map<int, string> phone;
        phone[2] = "abc";
        phone[3] = "def";
        phone[4] = "ghi";
        phone[5] = "jkl";
        phone[6] = "mno";
        phone[7] = "pqrs";
        phone[8] = "tuv";
        phone[9] = "wxyz";
        
        for(int i=0; i<digits.size(); ++i) {
            ans = multiply(phone[digits[i]-'0'], ans);
        }
        return ans;
    }
};
