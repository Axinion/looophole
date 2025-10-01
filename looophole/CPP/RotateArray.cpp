// Solution 1: Looping twice

vector<int> rotateArray(vector<int>arr, int k) {
    vector<int> res;
    for(int i=k;i<arr.size();i++){
        res.push_back(arr[i]);
    }
    for(int i=0;i<k;i++){
        res.push_back(arr[i]);
    }
    return res;
}


// Solution 2: Reverse logic

vector<int> rotateArray(vector<int>arr, int k) {
    int n = arr.size();
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin()+ n - k);
    reverse(arr.begin()+ n - k, arr.end());
    return arr;
}
