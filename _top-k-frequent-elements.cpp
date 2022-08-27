class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(auto x:nums) {
            freq[x]++;
        }
        // nums = [1,1,1,2,2,3,3,3,3,4,4,4,4,4]
        // freq = [{1,3}, {2,2}, {3,4}, {4,5}]
        
        vector<pair<int, int>> element;
        for(auto [a,b]:freq) {
            element.push_back(make_pair(b,a));
        }
        // element = [(3,1), (2,2), (4,3), (5,4)]
        sort(element.rbegin(), element.rend());
        vector<int> ans;
        for(auto [a,b]:element) {
            if(--k >= 0) {
                ans.push_back(b);
            } else {
                return ans;
            }
        }
        return ans;
    }
};
