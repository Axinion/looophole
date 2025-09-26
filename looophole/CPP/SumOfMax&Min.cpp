// Solution 1 -> Normal Looping + Comparison:

#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    return maxi + mini;
}


// Solution 2 -> Pairwise Comparison method: (Less Comparison)

#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	int mini = 0;
    int maxi = 0;
    int i =0;
    if(n%2==0){
        if(arr[0]>arr[1]){
            mini = arr[1];
            maxi = arr[0];
        }
        else{
            mini = arr[0];
            maxi = arr[1];
        }
        i = 2;
    }
    else{
        mini = arr[0];
        maxi = arr[0];
        i = 1;
    }

    while(i<n-1){
        if(arr[i]<arr[i+1]){
            if(arr[i]<mini){
                mini = arr[i];
            }
            if(arr[i+1]>maxi){
                maxi = arr[i+1];
            }
        }
        else{
            if(arr[i]>maxi){
                maxi = arr[i];
            }
            if(arr[i+1]<mini){
                mini = arr[i+1];
            }
        }
        i+=2;
    }
    return mini + maxi;
}
