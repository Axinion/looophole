// Solution 1

void selectionSort(vector<int>&arr) {
    for(int i=0;i<arr.size()-1;i++){
        int min = i;
        for(int j=i; j<arr.size();j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

// Solution 2 (Recursion)

#include <bits/stdc++.h>

void sort(vector<int>& arr, int n, int start){
    // base case
    if(start>=n-1){
        return;
    }
    int min = start;
    for(int i = start; i<n; i++){
        if(arr[i]<arr[min]){
            min = i;
        }
    }
    swap(arr[start], arr[min]);
    sort(arr, n, start+1);
}

void selectionSort(vector<int>& arr, int n)
{   
    sort(arr, n, 0);
}
