//https://leetcode.com/problems/count-binary-substrings/
class Solution {
public:
    int countBinarySubstrings(string s) {
        int start = 0, end = 0, j, k;
        vector<string> items;
        for(int i=0; i<s.size(); ++i) {
            string sub;
            int cn=0;
            bool stop;
            for(j=i; j<s.size()-1; ++j) {
                sub+=s[j];
                cn++;
                if(s[j] != s[j+1]) {
                    stop = true;
                    break;
                } else if(j == s.size() - 2) {
                    stop = false;
                }
            }
            char num = s[j+1];
            //cout << sub <<  " " << j << " " << cn << endl;
            if(stop)
            for(k=j+1; cn; ++k,--cn) {
                sub+=s[k];
                if(s[k] != num)
                    break;
                else if(cn == 1){
                    items.push_back(sub);
                }
            }
        }
        for(auto item: items)
            cout << item << " 99 " << endl;
        return items.size();
    }
};
