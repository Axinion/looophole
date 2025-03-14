// Solution 1

void reverseArray(vector<int> &arr , int m) {
    vector<int> ans;
    int n= arr.size();
    for(int i=0;i<=m;i++){
        ans.push_back(arr[i]);
    }
    for(int j=n-1;j>m;j--){
        ans.push_back(arr[j]);
    }
    arr = ans;
}

// Solution 2

void reverseArray(vector<int> &arr , int m) {
    int s = m+1;
    int e = arr.size()-1;
    while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
