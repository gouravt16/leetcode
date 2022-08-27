class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        // nums = [1,2,3,4]
        int n = nums.size();
        vector<int> prefix(n), postfix(n), ans(n);
        int prod = 1;
        for(int i=0; i<n; ++i) {
            prefix[i] = prod*nums[i];
            prod = prefix[i];
        }
        // prefix array is used for setting the product of array till i th number from start
        // prefix = [1,2,6,24]
        
        prod = 1;
        for(int i=nums.size()-1; i>0; --i) {
            postfix[i] = prod*nums[i];
            prod = postfix[i];
        }
        // postfix array is used for setting the product of array till i th starting from the end
        // postfix = [24,24,12,4]
        
        for(int i=0; i<n; ++i) {
            if(i-1 < 0) {
                ans[i] = 1*postfix[i+1];
            } else if(i+1 >= n) {
                ans[i] = prefix[i-1]*1;
            } else {
                ans[i] = prefix[i-1] * postfix[i+1];
            }
        }
        // To calculate the ans for 3 in [1,2,3,4] we have calculated the product from starting till 3
        // which is the prefix array and the product after 3 till ed which is postfix array
        return ans;
    }
};
