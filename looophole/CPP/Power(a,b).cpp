// Power of a,b sing recursion

#include <bits/stdc++.h>
using namespace std;

int power(int a, int b){
    // base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    
    // Recursive call
    int ans = power(a, b/2);
    
    // b is even
    if(b%2==0){
        return ans * ans;
    }
    // b is odd
    else{
        return a * ans * ans;
    }
}

int main() {
    int a, b;
	cin>>a>>b;
	cout<<endl;;
	
	cout<<power(a, b);

}
