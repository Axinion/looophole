#include <bits/stdc++.h>
using namespace std;

// Insertion Sort
void IS(vector<int>& arr, int n){
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j-=1;
        }
        arr[j+1] = temp;
    }
}

// Selection Sort
void SS(vector<int>& arr, int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

// Bubble Sort
void BS(vector<int>& arr, int n){
    for(int i=0;i<n;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

void Print(vector<int>& arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
	vector<int> a = {7,3,7,9,2,5,6};
	int n= 7;
	Print(a,n);
	SS(a,n);
	Print(a,n);
	BS(a,n);
	Print(a,n);
	IS(a,n);
	Print(a,n);
}
