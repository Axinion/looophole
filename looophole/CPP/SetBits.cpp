//  Solution 1:

#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

int countBits(int n){
    int c = 0;
    while(n!=0){
        if(n&1==1){
            c++;
        }
        n = n>>1;
    }
    return c;
}


// Solution 2:

int countBits(int n){
    int count = __builtin_popcount(n);
    return count;
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}
