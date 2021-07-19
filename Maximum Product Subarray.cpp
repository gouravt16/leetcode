// https://leetcode.com/problems/maximum-product-subarray/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxTill = nums[0];
        int minTill = nums[0];
        int ans = nums[0];
        
        for(int num=1; num<nums.size(); ++num) {
            int temp = max({ nums[num], nums[num]*maxTill, nums[num]*minTill});
            minTill = min({ nums[num], nums[num]*maxTill, nums[num]*minTill});
            maxTill = temp;
            ans = max(ans, maxTill);
            // cout << maxTill << " " << minTill << " " << ans << endl;
        }
        return ans;
    }
};
