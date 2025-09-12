//Solution 1 -> Bit Mask

class Solution {
public:
    int hammingWeight(int n) {
        int c = 0;
        while(n>0){
            if(n&1==1){
                c +=1;
            }
            n=n>>1;
        }
        return c;
    }
};

// Solution 2 -> Inbuilt Function

class Solution {
public:
    int hammingWeight(int n) {
        return __builtin_popcount(n);
    }
};
