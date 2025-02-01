#include <bits/stdc++.h>
using namespace std;

int pivotRotatedArr(int arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
            int mid = s + ((e-s)/2);
            if(arr[mid]>=arr[0]){
                s = mid + 1;
            }
            else{
                e = mid;
            }
    }
    return s;
}

int main() {
	int a[6] = {4,7,9,1,2,3};
	int n = 6;
	cout<<pivotRotatedArr(a,n);

}
