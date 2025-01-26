#include <bits/stdc++.h>
using namespace std;

void swapalt(int arr[], int n){
    for(int i=0;i+1<n;i+=2){
        swap(arr[i], arr[i+1]);
    }
}

int main() {
	int arr[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
    swapalt(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
