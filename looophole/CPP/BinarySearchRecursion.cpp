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


// GFG -> Binary Search -> Recursion

class Solution {
    
    int bs(vector<int>& arr, int s, int e, int k){
        // base case
        if(s>e){
            return -1;
        }
        int mid = s + (e-s)/2;
        if(arr[mid]==k){
            int leftSearch = bs(arr, s, mid-1, k);
            return(leftSearch != -1) ? leftSearch : mid;
        }
        
        if(arr[mid]>k){
            return bs(arr, s, mid-1, k);
        }
        else{
            return bs(arr, mid+1, e, k);
        }
    } 
    
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int ans = bs(arr, 0, arr.size()-1, k);
        return ans;
        
    }
};


