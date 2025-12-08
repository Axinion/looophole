// https://www.geeksforgeeks.org/problems/cube-root-of-a-number0915/1

// Binary Search Solution

class Solution {
  public:
    int cubeRoot(int n) {
        // code here
        int s = 0;
        int e = n;
        int ans = 0;
        while(s<=e){
            long long mid = s + (e-s)/2;
            if(mid*mid*mid == n){
                return mid;
            }
            else if(mid*mid*mid > n){
                e = mid - 1;
            }
            else{
                ans = mid;
                s = mid + 1;
            }
        }
        return ans;
    }
};
