// https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> arr;
        for(int i=0; i<nums.size(); ++i) {
            
            arr[nums[i]] = i;                
        }
        for(int i=0; i<nums.size(); ++i) {
            
            if(arr.find(target - nums[i]) != arr.end() && arr[target - nums[i]]!=i) {
                ans.push_back(i);
                ans.push_back(arr[target - nums[i]]);
                // cout << arr.find(target - nums[i]);
                // ans.push_back(5);
                return ans;
            }
        }
        return ans;
    }
};
