class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> ans;
        if(nums.size()==0) {
            return ans;
        }
        int start=0,end=0;
        for(int i=0; i<nums.size()-1; ++i) {
            if(nums[i]+1 == nums[i+1]) {
                end++;
            } else {
                if(start==end) {
                    ans.push_back(to_string(nums[start]));
                } else {
                    ans.push_back(to_string(nums[start])+"->"+to_string(nums[end]));
                }
                end++;
                start=end;
            }
        }
        if(start==end) {
            ans.push_back(to_string(nums[start]));
        } else {
            ans.push_back((to_string(nums[start])+"->"+to_string(nums[end])));
        }
        return ans;
    }
};
