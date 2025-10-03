// Solution -> XOR and AND

class Solution {
  public:
    int countBitsFlip(int a, int b) {
        // code here
        int x = a^b;
        int c = 0;
        while(x>0){
            c += (x&1);
            x = x>>1;
        }
        return c;
    }
};
