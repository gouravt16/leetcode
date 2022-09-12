class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX,start=0,sum=0;
        for(int i=0; i<nums.size(); ++i) {
            sum+=nums[i];
            while(sum >= target) {
                ans=min(ans, i-start+1);
                sum-=nums[start++];
            }
        }
        return ans==INT_MAX?0:ans;
    }
};
