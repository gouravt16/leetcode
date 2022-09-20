class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        vector<int> arr;
        int counter=1, n=nums.size(), ans=0;
        bool flag=false;
        for(int i=0; i<n-1; ++i) {
            if(nums[i]==nums[i+1]) {
                ++counter;
            } else {
                arr.push_back(nums[i+1]==1?-counter:counter);
                (nums[i+1]==0)?ans=max(ans, counter):flag=true;
                counter=1;
            }
        }
        (nums[n-1]==0)?flag=true:ans=max(ans, counter);
        arr.push_back(nums[n-1]==1?counter:-counter);
        for(int i=1; i<arr.size()-1; ++i) {
            if(arr[i]==-1) {
                ans=max(ans, arr[i-1]+arr[i+1]);
            }
        }
        return flag?ans:ans-1;
    }
};
/*
for [0,1,1,1,0,1,1,0,0,1] input, I've created an array as [-1,3,-1,2,-2,1]
so I'm counting the consecutive number of 1 & 0. If 1 then +counter is placed else -counter is added into array
Next, I'm omitting -1 value from the resultant array and comparing values.
*/
