int fstOcc(vector <int>& arr, int n, int k){
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

int lstOcc(vector <int>& arr, int n, int k){
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

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;
    p.first = fstOcc(arr, n, k);
    p.second = lstOcc(arr, n, k);
    return p;
}
