//        https://leetcode.com/assessment/1/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=0;
        for(int i=0; i<nums.size(); ++i) {
            if(nums[i] == val) {
                nums[i] = -1;
                ans++;
            }
        }
        for(int i=0, index=0; index<nums.size()-ans; ++i) {
            // cout << endl << "index = " << index << " i = " << i << endl;
            if(nums[i] != -1) {
                nums[index] = nums[i];
                // nums[i] = -1;
                index++;
            }
            // for(int j=0; j<nums.size(); ++j) {
            //     cout << nums[j] << " ";
            // }
            
        }
        return nums.size()-ans;
    }
};
