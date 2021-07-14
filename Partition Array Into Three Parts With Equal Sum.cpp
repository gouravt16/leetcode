// https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/submissions/

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(auto& item:arr) {
            sum+=item;
        }
        int requiredvalue = sum /3;
        int sum1 =requiredvalue;
        int count = 0;
        int index =0;
        for(int j=0; j<arr.size(); ++j){
            if(sum1-arr[j] == 0) {
                count++;
                sum1 = requiredvalue;
                if(count == 2) {
                    index = j;
                    break;
                }
            } else {
                sum1=sum1-arr[j];
            }
        }
        int sum2=0;
        if(count == 2) {
            if(index == arr.size() - 1)
                return false;
        for(int j=index+1; j<arr.size(); ++j) {
            sum2+=arr[j];
        }
        if(sum2 == requiredvalue) {
            return true;
        }}
        return false;
    }
};
