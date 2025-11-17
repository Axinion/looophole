// Given an integer ‘N’, you are supposed to return the square of the given integer without using multiplication (*), division (/), or power function (pow()).

// Solution 1: (brute force)

#include <bits/stdc++.h> 
int calculateSquare(int num)
{
    int ans = 0;
    if(num<0){
        num = -num;
    }
    for(int i=1;i<=num;i++){
        ans += num;
    }
    return ans;
}


// Solution 2: (Bit Manipulation)

#include <bits/stdc++.h> 
int calculateSquare(int num)
{
    long long n = llabs((long long)num);

    long long result = 0;
    long long a = n;
    long long b = n;

    while(b>0){
        if(b&1){
            result +=a;
        }
        a <<= 1;
        b >>= 1;
    }
    return (int)result;
}
