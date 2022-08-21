class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int nums_size = nums.size();
        int i=0,j=0;
        for(; i<nums_size-1; ++i) {
            if(nums[i] != nums[i+1]) {
                nums[++j] = nums[i+1];
            }
        }
        return j+1;
    }
};
