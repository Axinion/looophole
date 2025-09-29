// Solution 1: (Sort) -> Time: O(nlogn) -> passes all test cases

#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    sort(nums.begin(), nums.end());
    return nums;
}


// Solution 2: (Two pointer) -> Time: O(n) -> Gives TLE

#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    int i =0;
    int j= nums.size()-1;
    while(i<j){
        if(nums[i]>0 && nums[j]<0){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        else if(nums[i]<=0){
            i++;
        }
        else if(nums[j]>0){
            j--;
        }
    }
    return nums;
}
