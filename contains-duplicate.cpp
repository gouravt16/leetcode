class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> hash;
        for(auto x:nums) {
            if(++hash[x] > 1)
                return true;
        }
        return false;
    }
};
