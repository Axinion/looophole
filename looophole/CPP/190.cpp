// Solution 1

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        int i = 31;
        while(n!=0){
            int b = n&1;
            ans = (b*(pow(2,i))) + ans;
            i-=1;
            n=n>>1;
        }
        return ans;
    }
};

// Solution 2

#include <cmath>
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        for(int i=0;i<32;i++){
            res = res<<1;
            res = res|(n&1);
            n = n>>1;
        }
        return res;
    }
};