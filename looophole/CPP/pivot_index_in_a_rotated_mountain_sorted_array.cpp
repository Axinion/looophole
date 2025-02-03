class Solution {
public:
    int pivotIndexInRotatedArray(vector<int>& arr) {
        int s = 0, e = arr.size() - 1;
        while (s < e) {
            int mid = s + (e - s) / 2;
            if (arr[mid] > arr[mid + 1]) {
                return mid + 1; // Pivot found
            } 
            if (arr[mid] >= arr[s]) {
                s = mid + 1;
            } else {
                e = mid;
            }
        }
        return 0; // If no rotation, pivot is at index 0
    }
};
