// From Scratch 

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

// GFG - Recursion

// User function template for C++
class Solution {
    
    int getSum(vector<int>& arr, int index){
        // base case
        if(index==arr.size()){
            return 0;
        }
        return arr[index] + getSum(arr, index+1);
    }
    
  public:
    // Function to return the sum of elements
    int arraySum(vector<int>& arr) {
        // code here
        int ans = getSum(arr, 0);
        return ans;
    }
};
