// solution 1

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> count(26, 0);
        int len1 = s1.length();
        int len2 = s2.length();
        int left = 0, right = 0;
        int countMatches = 0;
        for (char c : s1) {
            count[c - 'a']++;
        }
        while (right < len2) {
            countMatches += (--count[s2[right] - 'a'] >= 0);
            right++;
            if (right - left > len1) {
                countMatches -= (++count[s2[left] - 'a'] > 0);
                left++;
            }
            if (countMatches == len1) {
                return true;
            }
        } 
        return false;
    }
};
