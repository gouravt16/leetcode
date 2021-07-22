// https://leetcode.com/problems/next-greater-element-i/
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        int i=1,j,k;
        unordered_map<int, int> ans;
        stack<int> s;
        
        for(i=b.size()-1; i>=0; --i) {
            while(!s.empty() && b[i] > s.top())
                    s.pop();
            if(s.empty()) {
                ans[b[i]] = -1;
            } else if(b[i] < s.top()) {
                ans[b[i]] = s.top();
            } 
            s.push(b[i]);
        }
        
        for(k=0; k<a.size(); ++k) {
            a[k] = ans[a[k]];
        }
        return a;
    }
};
