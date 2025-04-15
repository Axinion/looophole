#include <bits/stdc++.h>
using namespace std;

int Sumi(int arr[], int size){
    if(size==0){
        return 0;
    }
    return arr[0] + Sumi(arr+1, size-1);
}


int main() {
	
	int size;
	cin>>size;
	int arr[1000];
	for(int i=0;i<size;i++){
	    cin>>arr[i];
	}
	cout<<Sumi(arr, size);
}
