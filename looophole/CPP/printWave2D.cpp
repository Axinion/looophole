// solution 1

#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> z;
    for(int i=0;i<mCols;i++){
        if(i%2==0){
            for(int j=0;j<nRows;j++){
                z.push_back(arr[j][i]);
            }
        }
        else{
            for(int j=nRows-1;j>=0;j--){
                z.push_back(arr[j][i]);
            }
        }
    }
    return z;
}
