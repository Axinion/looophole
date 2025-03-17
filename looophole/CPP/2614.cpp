#include <vector>
#include <cmath>
class Solution {

bool isPrime(int a) {
    if(a <= 1) return false;
    if(a == 2) return true;
    if(a % 2 == 0) return false;
    
    int limit = sqrt(a);
    for(int i = 3; i <= limit; i += 2) {
        if(a % i == 0) return false;
    }
    return true;
}

public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int maxPrime = 0;
        for(int i=0;i<n;i++){
            int val1 = nums[i][i];
            int val2 = nums[i][n-i-1];
            if(isPrime(val1)){
                maxPrime = max(maxPrime, val1);
            }
            if(isPrime(val2)){
                maxPrime = max(maxPrime, val2);
            }
        }
        return maxPrime;
    }
};
