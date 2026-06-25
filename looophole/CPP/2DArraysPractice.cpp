#include <bits/stdc++.h>
using namespace std;

void colsum(int arr[][3], int row, int col){
    int z[3] = {0};
    for(int i=0;i<col;i++){
        int q = 0;
        for(int j=0;j<row;j++){
            q += arr[j][i];
        }
        z[i] = q;
    }
    
    for(int i = 0; i<3;i++){
        cout<<z[i]<<" ";
    }
}

void submat(int arr[][3], int arr1[][3], int row, int col){
    for(int i = 0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j] = arr[i][j] - arr1[i][j];
        }
    }
    for(int i = 0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
    }
}

void diagsum(int arr[][3], int row, int col){
    int fst = 0, scnd = 0;
    for(int i=0; i<row;i++){
        fst += arr[i][i];
    }
    
    int i = 0, j = col - 1;
    while(j>=0){
        if(i==j){
            i++;
            j--;
        }
        scnd += arr[i][j];
        i++;
        j--;
    }
    int sum = fst + scnd;
    cout<<sum;
}

void Lrgt(int arr[][3], int row, int col){
    int ans = INT_MIN;
    for(int i=0; i<row; i++){
        for(int j= 0;j<col;j++){
            if(ans<arr[i][j]){
                ans = arr[i][j];
            }
        }
    }
    cout<<ans<<endl;
}

void Smlt(int arr[][3], int row, int col){
    int ans = INT_MAX;
    for(int i=0; i<row; i++){
        for(int j= 0;j<col;j++){
            if(ans>arr[i][j]){
                ans = arr[i][j];
            }
        }
    }
    cout<<ans;
}

int main() {
	const int row = 3;
	const int col = 3;
	int arr[row][col] = {{4,3,6}, {7,2,9}, {2,9,2}};
	int arr1[row][col] = {{8,2,1}, {4,6,0}, {5, 7,9}};
	//colsum(arr, row, col);
    //submat(arr, arr1, row, col);
    //diagsum(arr, row, col);
    Lrgt(arr, row, col);
    Smlt(arr, row, col);
    
}
