class Solution {
public:
    int hammingDistance(int x, int y) {
        int a = x^y;
        int ans = __builtin_popcount(a);
        return ans;
    }
};