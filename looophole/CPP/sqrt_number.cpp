//Using Binary Search 
// Solution 1
#include <cmath>

int floorSqrt(int n)
{
    long s = 0;
    long e = n;
    while(s<=e){
        long mid = s + ((e-s)/2);
        if((mid*mid)==n){
            return mid;
        }
        else if(((mid-1)*(mid-1))<=n && ((mid)*(mid))>=n){
            return mid-1;
        }
        else if((mid*mid)<n){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
}

// Solution 2
/*

int floorSqrt(int n)
{
    long s = 0;
    long e = n;
    long ans = -1;
    while(s<=e){
        long mid = s + ((e-s)/2);
        if((mid*mid)==n){
            return mid;
        }
        else if((mid*mid)<n){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}
*/
