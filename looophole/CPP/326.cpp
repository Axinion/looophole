// Solution 1: (Using recursion)

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1){
            return true;
        }
        if(n<1){
            return false;
        }
        else if(n%3!=0){
            return false;
        }
        else{
            bool res = isPowerOfThree(n/3);
            return res;
        }
    }
};
