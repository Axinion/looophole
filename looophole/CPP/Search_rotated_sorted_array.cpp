// Solution 1

int binarySearch(vector<int>& arr, int s, int e, int key) {

    int start = s;
    int end = e;
    while(start <= end) {
        int mid = start + (end-start)/2;

        if(arr[mid] == key) {
            return mid;
        }
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        //mid = start + (end-start)/2;
    }   
    return -1;
}

int pivotRotatedArr(vector<int> &arr, int n){
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


int search(vector<int>& arr, int n, int k)
{
    int pivot = pivotRotatedArr(arr, n);
    if(k>= arr[pivot] && k<= arr[n-1]){
        binarySearch(arr, pivot, n-1, k);
    }
    else{
        binarySearch(arr, 0, pivot, k);
    }
}

// Solution 2
/*
int search(vector<int>& arr, int n, int k)
{
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = s + ((e-s)/2);
        if(arr[mid]==k){
            return mid;
        }
        if(arr[s]<=arr[mid]){
            if(k>=arr[s] && k<arr[mid]){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        else{
            if(k>arr[mid] && k<=arr[e]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
    }
    return -1;
}

*/
