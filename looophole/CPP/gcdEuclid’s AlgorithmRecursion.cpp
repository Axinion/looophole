#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}

int main() {
    int a;
	cin>>a;
	int b;
	cin>>b;
	int res = gcd(a, b);
	cout<<res;
	return 0;
}
