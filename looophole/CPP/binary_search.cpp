// Solution 1: 

int search(vector<int> &nums, int target) {
    int start = 0;
    int end = nums.size() - 1;
    //int mid = (start+end)/2
    while(start<=end){
        int mid = (start+end)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

// Solution 2: Using Recursion

int BinarySearch(vector<int> &arr, int s, int e, int k){
    int mid = s + (e-s)/2;
    if(s>e){
        return -1;
    }
    if(arr[mid]==k){
        return mid;
    }
    else if(arr[mid]<k){
        return BinarySearch(arr, mid+1, e, k);
    }
    else{
        return BinarySearch(arr, s, mid-1, k);
    }
}

int search(vector<int> &nums, int target) {
    int res = BinarySearch(nums, 0, nums.size()-1, target);
}

