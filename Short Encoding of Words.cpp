// https://leetcode.com/problems/short-encoding-of-words/submissions/
class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        set<string> wordss(words.begin(), words.end());
        string bigWord;
        for(auto word: wordss) {
            bigWord+=word+'#';
        }
        //cout << bigWord;
        int ans = bigWord.size();
        for(auto word: wordss) {
            if(bigWord.find(word+'#', bigWord.find(word+'#', 0)+1) != string::npos) {
                ans-=word.size()+1;
            }
        }
        return ans;
    }
};
