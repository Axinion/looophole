// Coding Ninjas

#include <bits/stdc++.h> 

void minHeapify(vector<int> &arr, int n, int i){
    int smallest = i;
    int left = i*2 + 1;
    int right = i*2 + 2;

    if(left<n && arr[smallest]>arr[left]){
        smallest = left;
    }
    if(right<n && arr[smallest]>arr[right]){
        smallest = right;
    }
    if(smallest!= i){
        swap(arr[smallest], arr[i]);
        minHeapify(arr, n, smallest);
    }
}

vector<int> buildMinHeap(vector<int> &arr)
{
    int n = arr.size();
    for(int i=n/2-1;i>=0;i--){
        minHeapify(arr, n, i);
    }
    return arr;
}
