class Solution {
public:
    int minBitFlips(int start, int goal) {
        int a = start^goal;
        int ans = __builtin_popcount(a);
        return ans;
    }
};