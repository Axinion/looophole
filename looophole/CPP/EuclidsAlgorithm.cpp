
// gcd(a,b) = gcd(a-b, b) = gcd(a%b,b)      Condition: a>b

// lcm(a,b) * gcd(a,b) = a*b

#include <iostream>

int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main() {
    // Write C++ code here
    int a,b;
    std::cout << "Enter a & b: ";
    std::cin>>a>>b;
    int ans = gcd(a,b);
    std::cout<<ans;

    return 0;
}
