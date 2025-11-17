// Solution 1: Brute force -> TLE

// Solution 2: (Shifting method)

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shift = 0;
        while(left<right){
            left = left>>1;
            right = right>>1;
            shift = shift + 1;
        }
        return left << shift;
    }
};
