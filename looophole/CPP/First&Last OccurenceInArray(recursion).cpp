#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int FO(vector<int>& arr, int index, int t){
    if(index==arr.size()) return -1;
    if(arr[index]==t){
        return index;
    }
    return FO(arr, index+1, t);
}

int LO(vector<int>& arr, int index, int t){
    if(index==arr.size()) return -1;
    int res = LO(arr, index+1, t);
    if(res!=-1) return res;
    if(arr[index]==t){
        return index;
    }
    return -1;
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target element: ";
    cin >> target;
    int fstO = FO(arr, 0, target);
    int lstO = LO(arr, 0, target);
    
    cout << "First Occurrence: " << fstO << endl;
    cout << "Last Occurrence: " << lstO << endl;

    return 0;
}
