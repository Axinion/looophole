#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool res = isSorted(arr+1, size-1);
        return res;
    }
}

int main() {
	int arr[6] = {1,2,6,5,7,9};
	int size = 6;
	
	bool ans = isSorted(arr,size);
	if(ans){
	    cout<<"Array is Sorted"<<endl;
	}
	else{
	    cout<<"Array is not sorted"<<endl;
	}

}
