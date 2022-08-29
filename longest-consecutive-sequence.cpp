class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> arr;
        int ans = 0;
        
        int maxEle = INT_MIN, minEle = INT_MAX;
        for(auto x:nums) {
            arr[x] = 1;
            maxEle = max(maxEle, x);
            minEle = min(minEle, x);
        }
        int cn=0;
        int first=INT_MIN;
        for(auto [a,_]:arr) {
            if(a==first+1) {
                ++cn;
            } else {
                ans=max(ans,cn);
                cn=1;
            }
            first=a;
        }
        return max(ans,cn);
    }
};


