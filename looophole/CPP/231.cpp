// Solution 1 -> Recursion

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0){
            return false;
        }
        return ((n)&(n-1))==0;
    }
};

// Solution 2 -> Recursion

class Solution {
public:
    bool isPowerOfTwo(int n) {
        // base case
        if(n==1){
            return true;
        }
        else if(n==0 or n%2!=0){
            return false;
        }

        return isPowerOfTwo(n/2);
    }
};

// Solution 3 -> Without Recursion

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int  count = 0;
        int bit;
        if(n<0){
            return false;
        }
        while(n!=0){
            bit = n&1;
            if(bit==1){
                count += 1;
            }
            n = n>>1;
        }
        if(count == 1){
            return true;
        }
        else{
            return false;
        }
    }
};
