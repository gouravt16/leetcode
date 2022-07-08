class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        while(right-left>1) {
            int middle = (left+right)/2;
            if(nums[middle] == target) {
                return middle;
            } else if(nums[middle] < target) {
                left = middle+1;
            } else {
                right = middle;
            }
        }
        if(target <= nums[left]) {
            return left;
        }
        if(target == nums[right]) {
            return right;
        }
        if(target > nums[right]){
            return right+1;
        }
        if(target > nums[left] && target < nums[right])
            return left+1;
        return 0;
    }
};
