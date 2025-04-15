#include <bits/stdc++.h>
using namespace std;

int revh(int n, int m){
    if(n==0){
        return m;
    }
    int d = n%10;
    return revh(n/10, m*10+d);
}

int rev(int n){
    return revh(n,0);
}


int main() {

	int n;
	cin>>n;
	int ans = rev(n);
	if(ans==n){
	    cout<<"IS PALINDROME";
	}
	else{
	    cout<<"IS NOT A PALINDROME";
	}
	return 0;
}
