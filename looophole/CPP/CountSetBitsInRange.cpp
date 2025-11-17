// Solution 1:

class Solution {
  public:
    long long countSetBits(int n) {
        if(n==0) return 0;
        int p = 31 - __builtin_clz(n);
        long long x = 1LL << p;
        long ones_up_to_x_1 = 1LL * p * (x>>1);
        long long msb_ones = n - x + 1;
        long long rest = n - x;
        return ones_up_to_x_1 + msb_ones + countSetBits((int) rest);
    }
};
