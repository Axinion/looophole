// Solution 1 -> O(N)

/*
class Solution {
public:
    int addDigits(int num) {
        //int sum = 0;
        while(num>9){
            int d = num%10;
            num = num/10;
            num = num+d;
        }
        return num;
    }
};
*/

// Solution 2 -> O(1)

class Solution {
public:
    int addDigits(int num) {
        if(num==0){
            return 0;
        }
        else if(num%9==0){
            return 9;
        }
        else{
            return num%9;
        }
    }
};
