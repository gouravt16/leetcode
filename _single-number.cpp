class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> num;
        for(auto x:nums)
            num[x]++;
        for(auto [_,freq]:num)
            if(freq == 1)
                return _;
        return 0;
        /*
        int ans = 0;
        for(auto x:nums) {
            ans^=x;
        }
        return ans;
        // for [4,1,2,2,1] the ans would be 0,4,5,7,5,4.
        */
    }
};
