class Solution {
public:
    
    int findIndex(string value, vector<string>& list2) {
        int list2_size = list2.size();
        for(int i=0; i<list2_size; ++i) {
            if(list2[i] == value) {
                return i;
            }
        }
        return -1;
    }
    
    
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int list1_size = list1.size(), list2_size = list2.size();
        int mini = list1_size + list2_size + 1;
        vector<string> ans;
        for(int i=0; i<list1_size; ++i) {
            int index = findIndex(list1[i], list2);
            if(index != -1) {
                if (index+i == mini) {
                    ans.push_back(list1[i]);
                }
                else if (index+i < mini) {
                    ans.clear();
                    ans.push_back(list1[i]);
                    mini = index+i;
                }
            }
        }
        return ans;
    }
};
