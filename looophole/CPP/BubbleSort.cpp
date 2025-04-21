// Solution 1: (Without recursion)

#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n; i++) {
        bool swapped = false;
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

// Solution 2: (With Recursion) (LC Q-75)

class Solution {

public:
    void Bsort(vector<int>& nums, int n){
        if(n==0||n==1) return;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                swap(nums[i], nums[i+1]);
            }
        }
        Bsort(nums, n-1);
    }

public:
    void sortColors(vector<int>& nums) {
        Bsort(nums, nums.size());
    }
};
