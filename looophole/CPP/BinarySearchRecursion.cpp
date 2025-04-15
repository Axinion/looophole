#include <bits/stdc++.h>
using namespace std;

bool BinarySearch(int *arr, int s, int e, int k){
    int mid = s + (e-s)/2;
    if(s>e){
        return false;
    }
    if(arr[mid]==k){
        return true;
    }
    else if(arr[mid]<k){
        return BinarySearch(arr, mid+1, e, k);
    }
    else{
        return BinarySearch(arr, s, mid-1, k);
    }
}


int main() {
	
	int size;
	cin>>size;
	int arr[1000];
	for(int i=0;i<size;i++){
	    cin>>arr[i];
	}
	int k;
	cin>>k;
	bool res = BinarySearch(arr, 0, size-1, k);
	if(res){
	    cout<<"present"<<endl;
	}
	else{
	    cout<<"not present"<<endl;
	}
}
