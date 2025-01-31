#include <bits/stdc++.h>
using namespace std;

int fstOcc(int arr[], int n, int k){
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s<=e){
        int mid = s + ((e-s)/2);
        if(arr[mid] == k){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid]<k){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

int lstOcc(int arr[], int n, int k){
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s<=e){
        int mid = s + ((e-s)/2);
        if(arr[mid] == k){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid]<k){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
int a[] = {1,2,3,3,3,3,3,3,4,5,6,7,9,10};
int n = 14;
int k = 3;
int z1 = fstOcc(a,n,k);
int z2 = lstOcc(a,n,k);
cout<<z2-z1+1;

}
