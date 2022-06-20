class Solution {
public:
    bool isSubsequence(string s, string t) {
        unordered_map<char, vector<int>> alpha;
        int i=0,t_size = t.size(),s_size = s.size();
        for(; i<t_size; ++i) {
            vector<int> temp=alpha[t[i]];
            temp.push_back(i);
            alpha[t[i]] = temp;
        }
        
        /*for(auto item: alpha) {
            cout << "\n" << item.first << " ";
            for(auto x:item.second) {
                cout << x << " ";
            }
        }*/
        int item = -1;
        for(i=0; i<s_size; ++i) {
            vector<int>::iterator itr = upper_bound(alpha[s[i]].begin(), alpha[s[i]].end(), item);
            if(itr == alpha[s[i]].end())
                return false;
            else {
                int index = itr - alpha[s[i]].begin();
                item = alpha[s[i]][index];
                // cout << index << " " << item << endl;
            }
        }
        return true;
    }
};
