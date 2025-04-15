#include <bits/stdc++.h>
using namespace std;

bool Search(int arr[], int size, int k){
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool left = Search(arr+1, size-1, k);
        return left;
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
	bool res = Search(arr, size, k);
	if(res){
	    cout<<"present"<<endl;
	}
	else{
	    cout<<"not present"<<endl;
	}
}
