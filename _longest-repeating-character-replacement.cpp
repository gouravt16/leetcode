class Solution {
public:
    int characterReplacement(string s, int k) {
        int s_size = s.size();
        int res_k = k;
        unordered_map<char, vector<int>> u;
        for(int i=0; s[i]; ++i){
            u[s[i]].push_back(i);
        }
        int ans=0;
        for(auto [key, value]:u) {
            k=res_k;
            // cout << key << ": ";
            vector<int> temp = u[key];
            int sum = 0, start = temp[0]-1;
            queue<pair<int, int>> q;
            for(auto x:temp) {
                // cout << "\n> sum = " << sum << " x = " << x << " start = " << start << " k = " << k << " ";
                if(x - start != 1) {
                    if(x-start-1 <= k) {
                        pair<int, int> p(start, x-start-1);
                        // cout << "\n Q + " << start << " " << x-start-1 << endl;
                        q.push(p);
                        k-=x-start-1;
                        sum+=x-start;
                        start=x;
                    } else {
                        sum=min(s_size, sum+k);
                        ans=max(ans,sum);
                        bool flag=false;
                        int first_item=start;
                        int second_item=x-start-1;
                        while(!q.empty()) {
                            pair<int, int> deleted = q.front();
                            // cout << "\n Q - " << deleted.first << " " << deleted.second << endl;
                            k+=deleted.second;
                            sum=start-(deleted.first+deleted.second);
                            q.pop();
                            if(x-start-1<=k) {
                                // add to queue
                                pair<int, int> p(first_item, second_item);
                                q.push(p);
                                sum+=x-start;
                                k-=x-start-1;
                                start=x;
                                flag=true;
                                break;
                            }
                        }
                        if(!flag) {
                            k = res_k;
                            sum = 1;
                            start = x;
                        }      
                        ans=max(ans,sum);
                    }
                } else {
                    // cout << " ++ ";
                    ++sum;
                    start = x;
                }
                // cout << "\n< sum = " << sum << " x = " << x << " start = " << start << " k = " << k << " ";
            }
            sum=min(s_size, sum+k);
            ans=max(ans,sum);
            // cout << endl;
            
        }
        return ans;
    }
};
