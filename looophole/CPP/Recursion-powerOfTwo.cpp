#include <bits/stdc++.h>
using namespace std;

int pow(int n){
    if(n==0){
        return 1;
    }
    return 2*pow(n-1);
}

int main() {
	int a;
	cin>>a;
	
	cout<<pow(a)<<endl;

}
