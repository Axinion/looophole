#include <bits/stdc++.h>
using namespace std;

int exponents(int a, int b){
    if(b==0){
        return 1;
    }
    return a * exponents(a, b-1);
}

int main() {
    int a;
	cin>>a;
	int b;
	cin>>b;
	int res = exponents(a,b);
	cout<<res;
	return 0;

}
