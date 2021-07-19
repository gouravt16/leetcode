// https://leetcode.com/problems/binary-prefix-divisible-by-5
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        unsigned long long sum=0;
        for(int i=0; i<nums.size(); ++i) {
            sum=sum*2+nums[i];
            ans.push_back(sum%5==0);
            sum%=5;
            //cout << sum << " ";
        }
        return ans;
    }
};
