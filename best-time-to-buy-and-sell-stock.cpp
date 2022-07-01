class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        set<int> share;
        share.insert(prices[0]);
        int ans=0, prices_size = prices.size();
        for(int i=1; i<prices_size; ++i) {
            int temp = prices[i] - *share.begin();
            if(temp > ans) {
                ans = temp;
            }
            share.insert(prices[i]);
        }
        return ans;
      // or we can do it in O(n^2) time also with brute force.
    }
};
