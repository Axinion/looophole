//Using Binary Search 

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
