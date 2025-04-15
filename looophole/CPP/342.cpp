// Solution 1: (Using recursion)

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1){
            return true;
        }
        if(n<1){
            return false;
        }
        else if(n%4!=0){
            return false;
        }
        else{
            bool res = isPowerOfFour(n/4);
            return res;
        }
    }
};
