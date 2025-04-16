#include <bits/stdc++.h>
using namespace std;

int count(int n){
    if(n == 0){
        return 1;
    }
    return 1 + count(n / 10);
}

int main() {
    int a;
	cin>>a;
	int res = count(a);
	cout<<res;
	return 0;

}
