#include <bits/stdc++.h>
using namespace std;

void sayDigit(int n, string arr[]){
    if(n==0){
        return;
    }
    
    int d = n%10;
    n=n/10;
    //cout<<arr[n];
    
    sayDigit(n, arr);
    cout<<arr[d]<<" ";
}

int main() {
	string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	
	int n;
	cin>>n;
	cout<<endl;
	sayDigit(n, arr);
}
