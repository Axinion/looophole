class Solution {
public:

    vector<int> convertToBase(int n, int b){
        vector<int> digits;
        while(n>0){
            digits.push_back(n%b);
            n = n/b;
        }
        return digits;
    }

    bool isPalindrome(const vector<int> digits){
        int start = 0;
        int end = digits.size()-1;
        while(start<end){
            if(digits[start]!=digits[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    bool isStrictlyPalindromic(int n) {
        for(int base = 2; base<n-1;base++){
            vector<int> baseDigits = convertToBase(n, base);
            if(!isPalindrome(baseDigits)){
                return false;
            }
        }
        return true;
    }
};
