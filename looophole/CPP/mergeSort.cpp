// Solution 1: 

void merge(vector < int > & arr, int s, int e){
    int mid = s + (e-s)/2;
    int l1 = mid-s+1;
    int l2 = e-mid;
    
    int *first = new int[l1];
    int *second =new int[l2];
    
    //copy values
    int mai = s;
    for(int i=0;i<l1;i++){
        first[i] = arr[mai++];
    }
    
    mai = mid+1;
    for(int i=0;i<l2;i++){
        second[i] = arr[mai++];
    }
    
    // merge 2 sorted arrays
    
    int i1 = 0;
    int i2 = 0;
    mai = s;
    while(i1<l1 && i2<l2){
        if(first[i1]<second[i2]){
            arr[mai++] = first[i1++];
        }
        else{
            arr[mai++] = second[i2++];
        }
    }
    
    while(i1<l1){
        arr[mai++] = first[i1++];
    }
    
    while(i2<l2){
        arr[mai++] = second[i2++];
    }
    
    delete []first;
    delete []second;
}

void Solve(vector < int > & arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid = s + (e-s)/2;
    // left
    Solve(arr, s, mid);
    
    // right
    Solve(arr, mid+1, e);
    
    //merge
    merge(arr, s, e);
}

void mergeSort(vector < int > & arr, int n) {
    Solve(arr, 0, n-1);
}



