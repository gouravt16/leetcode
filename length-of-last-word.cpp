class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0,temp = 0;
        for(auto c:s) {
            if(c == ' ') {
                if(ans)
                    temp=ans;
                ans = 0;
            } else {
                ans++;
            }
        }
        return ans ? ans : temp;
    }
};
