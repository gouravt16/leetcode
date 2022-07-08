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
/*
Some of the Binary Search based Interval Problems :)
57. Insert Interval - https://leetcode.com/problems/insert-interval/
436. Find Right Interval - https://leetcode.com/problems/find-right-interval/
729. My Calendar I - https://leetcode.com/problems/my-calendar-i/
1235. Maximum Profit in Job Scheduling - https://leetcode.com/problems/maximum-profit-in-job-scheduling/
2054. Two Best Non-Overlapping Events - https://leetcode.com/problems/two-best-non-overlapping-events/
*/
