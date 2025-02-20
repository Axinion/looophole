#include <bits/stdc++.h>
using namespace std;


bool searchEle(int arr[][3], int target, int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main() {
	int a[3][3];
	cout<<"Enter the elements of 2D array"<<endl;
	for(int row=0;row<3;row++){
	    for(int col=0;col<3;col++){
	        cin>>a[row][col];
	    }
	}
	cout<<"Printing the elements of 2D array"<<endl;
	for(int row=0;row<3;row++){
	    for(int col=0;col<3;col++){
	        cout<<a[row][col]<<" ";
	    }
	    cout<<endl;
	}
	cout<<endl;
	int t;
	cout<<"Enter the target element: ";
	cin>>t;
	if(searchEle(a, t, 3, 3)){
	    cout<<"Target element is present";
	}
	else{
	    cout<<"Target element is not present"<<endl;
	}
	int sum1 = 0;
	cout<<"Printing the sum of 2D array row wise"<<endl;
	for(int row=0;row<3;row++){
	    for(int col=0;col<3;col++){
	        sum1 = sum1+a[row][col];
	    }
	    cout<<sum1;
	    sum1 = 0;
	    cout<<endl;
	}
	
	int sum2 = 0;
	cout<<"Printing the sum of 2D array col wise"<<endl;
	for(int col=0;col<3;col++){
	    for(int row=0;row<3;row++){
	        sum2 = sum2+a[row][col];
	    }
	    cout<<sum2;
	    sum2 = 0;
	    cout<<endl;
	}
	int z[3] = {0};
	cout<<"Printing the sum of 2D array row wise"<<endl;
	for(int row=0;row<3;row++){
	    int sum1 = 0;
	    for(int col=0;col<3;col++){
	        sum1 = sum1+a[row][col];
	    }
	    z[row] = sum1;
	    cout<<endl;
	}
	int maxi = -1;
	int index = 0;
	for(int i=0;i<3;i++){
	    if(z[i]>maxi){
	        maxi = z[i];
	        index = i;
	    }
	}
	cout<<"Maximum exist with value of "<<maxi<<"at index: "<<index<<endl;
}
