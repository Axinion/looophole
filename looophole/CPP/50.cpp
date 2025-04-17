// Solution 1 -> without negative b

#include <bits/stdc++.h>
using namespace std;

int pow(int a, int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans = pow(a, b/2);
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}

int main() {
    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<pow(a,b);
    return 0;
}

// Solution 2 -> with b being negative

class Solution {

public:
    double pow(double a, long long b){
        if(b==0){
            return 1;
        }
        else if(b==1){
            return a;
        }
        double ans = pow(a, b/2);
        if(b%2==0){
            return ans*ans;
        }
        else{
            return a*ans*ans;
        }
}

public:
    double myPow(double x, int n) {
        long long N = n;
        if(N<0){
            x = 1/x;
            N = -N;
        }
        return pow(x, N);
    }
};
