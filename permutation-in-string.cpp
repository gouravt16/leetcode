class Solution {
public:
    
    bool checkAnagram(unordered_map<char, int> freq1, unordered_map<char, int> freq2) {
        
        for(auto [a,b]:freq1) {
            if(freq1[a]!=freq2[a]) {
                return false;
            }
        }
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        int s1_size = s1.size(), s2_size = s2.size(),i=0,j=0;
        if(s2_size < s1_size)
            return false;
        unordered_map<char, int> freq1, freq2;
        for(; s1[i]; ++i) {
            ++freq1[s1[i]];
        }
        for(; j<s1_size; ++j) {
            ++freq2[s2[j]];
        }
        for(int i=0; i+s1_size<=s2_size; ++i) {
            if(checkAnagram(freq1,freq2)) {
                return true;
            }
            if(i+s1_size<s2_size) {
                ++freq2[s2[i+s1_size]];
            }
            --freq2[s2[i]];
        }
        return false;
    }
};
