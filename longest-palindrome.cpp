class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> alpha;
        bool isOdd = false;
        int ans=0;
        for(auto x: s) {
            alpha[x] = alpha.find(x) == alpha.end() ? 1 : alpha[x]+1;
        }
        for(auto x:alpha) {
            int temp = x.second;
            if(temp&1) {
                isOdd = true;
                ans+=temp-1;
            } else {
                ans+=temp;
            }
        }
        return isOdd?ans+1:ans;
    }
};
