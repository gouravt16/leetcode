class Solution {
public:
    vector<int> ans;
    int store[100001];
    
    int storeValue(int start, int until) {
        for(int i=start; i<=until; ++i) {
            if(i==start) {
                store[i] = 1;
            } else {
                store[i] = store[start] + store[i-start];
            }
            ans.push_back(store[i]);
        }
        return until;
    }
    
    vector<int> countBits(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int start=1,until=1;
        store[0]=0;
        ans.push_back(0);
        while(true) {
            if(storeValue(start, min(until,n)) == n) {
                return ans;
            }
            start = until+1;
            until = 2*until+1;
        }
        return ans;
    }
};
