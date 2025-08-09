// Solution 1 -> Bubble Sort

class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<nums.size()-i;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
    }
};

// Bubble sort with Recursion

class Solution {
public:

    void sort(vector<int>& nums, int n){
        // base case
        if(n==0 || n==1){
            return;
        }
        for(int i=0; i<n-1;i++){
            if(nums[i]>nums[i+1]){
                swap(nums[i], nums[i+1]);
            }
        }
        sort(nums, n-1);
    }

    void sortColors(vector<int>& nums) {
        int n = nums.size();
        sort(nums, n);
    }
};


// Solution 2 -> Insertion Sort
/*
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int temp = nums[i];
            int j=i-1;
            while(j>=0){
                if(nums[j]>temp){
                    nums[j+1] = nums[j];
                }
                else{
                    break;
                }
                j-=1;
            }
            nums[j+1] = temp;
        }
    }
};



// Solution 2 -> Insertion Sort (Using Recursion)

#include <bits/stdc++.h>

void sort(vector<int>& arr, int n, int s){
    // base case
    if(s>=n){
        return;
    }
    int temp = arr[s];
    int i = s-1;
    while(i>=0){
        if(arr[i]>temp){
            arr[i+1] = arr[i];
        }
        else{
            break;
        }
        i-=1;
    }
    arr[i+1] = temp;
    sort(arr, n, s+1);
}

void insertionSort(int n, vector<int> &arr){
    sort(arr, n, 1);
}
*/
