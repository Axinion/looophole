// Solution 1 - mine

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        unordered_map<char, int> m;
        for(char c: stones){
            m[c]++;
        }
        for(char c: jewels){
            if(m.count(c)){
                ans = ans + m[c];
            }
        }
        return ans;
    }
};
