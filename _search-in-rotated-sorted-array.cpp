class Solution {
public:
    
    // main binary search code
    int binarySearch(vector<int> nums, int left, int right, int target) {
        
        while(left <= right) {
            int mid = left + (right-left)/2;
            if(nums[mid] == target)
                return mid;
            else if(target > nums[mid]) {
                left = mid+1;
            } else {
                right = mid-1;
            }
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        int index=0,temp=0;
        // This block is used to find the staring index if sorted array.
        if(nums[left] > nums[right]) {
            while(left < right) {
                if(right == left+1) {
                    index = (nums[left]>nums[right])?right:left;
                    break;
                }
                if(nums[left] > nums[right]) {
                    temp = left;
                    left = left + (right-left)/2;
                } else {
                    right = left;
                    left = temp;
                }
            }
        }
        // index represents the index of the minimum item of the array.
        if(index > 0 && target >= nums[0] && target <= nums[index-1]) {
            return binarySearch(nums, 0, index-1, target);
        } else if(target >= nums[index] && target <= nums.back()) {
            return binarySearch(nums, index, nums.size()-1, target);
        }
        return -1;
    }
};
