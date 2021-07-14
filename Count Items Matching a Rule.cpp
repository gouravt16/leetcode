//https://leetcode.com/problems/count-items-matching-a-rule/submissions/

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ans=0;
        if(ruleKey == "type") {
            for(auto& row:items) {
                int i=0;
                for(auto& col:row) {
                    i++;
                    // cout << col << endl;
                    // cout << col[0] << endl;
                    // cout << ruleValue <<  " end" <<endl;
                    if(i==1&&col == ruleValue) {
                        ans++;
                        break;
                    }
                    
                }
            }
        } else if(ruleKey == "color") {
            for(auto& row:items) {
                int i=0;
                for(auto& col:row) {
                    i++;
                    if(i == 2 && col == ruleValue) {
                        ans++;
                        break;
                    }
                    
                }
            }
        }else if(ruleKey == "name") {
            for(auto& row:items) {
                int i=0;
                for(auto& col:row) {
                    i++;
                    if(i == 3 && col == ruleValue) {
                        ans++;
                        break;
                    }
                    
                }
            }
        }
        return ans;
    }
};
