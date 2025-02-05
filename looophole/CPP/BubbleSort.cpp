#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    int i=1;
    while(i<n){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        i+=1;
    }
}
