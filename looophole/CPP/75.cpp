// Selection Sort
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         for(int i=0;i<nums.size()-1;i++){
//             int index = i;
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[j]<nums[index]){
//                     index = j;
//                 }
//             }
//             swap(nums[i], nums[index]);
//         }
//     }
// };

//Decreasing selection sort
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         for(int i=0;i<nums.size()-1;i++){
//             int index = i;
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[j]>nums[index]){
//                     index = j;
//                 }
//             }
//             swap(nums[i], nums[index]);
//         }
//     }
// };


// // Bubble Sort
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         for(int i = nums.size() - 2;i >= 0; i--){
//             bool swapped = 0;
//             for(int j = 0; j<=i; j++){
//                 if(nums[j]>nums[j+1]){
//                     swap(nums[j], nums[j+1]);
//                     swapped = 1;
//                 }
//             }
//             if(swapped==0){
//                 break;
//             }
//         }
//     }
// };

// Decreasing Bubble Sort
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         for(int i = nums.size() - 2;i >= 0; i--){
//             bool swapped = 0;
//             for(int j = 0; j<=i; j++){
//                 if(nums[j]<nums[j+1]){
//                     swap(nums[j], nums[j+1]);
//                     swapped = 1;
//                 }
//             }
//             if(swapped==0){
//                 break;
//             }
//         }
//     }
// };

// Reverse Bubble Sort
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n = nums.size();
//         for(int i = 0;i <= n - 2; i++){
//             bool swapped = 0;
//             for(int j = 0; j < n-1-i; j++){
//                 if(nums[j]>nums[j+1]){
//                     swap(nums[j], nums[j+1]);
//                     swapped = 1;
//                 }
//             }
//             if(swapped==0){
//                 break;
//             }
//         }
//     }
// };

// Insertion Sort
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n = nums.size();
//         for(int i = 1; i<n; i++){
//             for(int j = i; j>0; j--){
//                 if(nums[j]<nums[j-1]){
//                     swap(nums[j], nums[j-1]);
//                 }
//                 else{
//                     break;
//                 }
//             }
//         }
//     }
// };


// Decreasing order Insertion sort
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n = nums.size();
//         for(int i = 1; i<n; i++){
//             for(int j = i; j>0; j--){
//                 if(nums[j]>nums[j-1]){
//                     swap(nums[j], nums[j-1]);
//                 }
//                 else{
//                     break;
//                 }
//             }
//         }
//     }
// };


// Reverse Insertion sort
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n = nums.size();
//         for(int i=n-2;i>=0;i--){
//             for(int j=i;j<n-1;j++){
//                 if(nums[j] > nums[j+1]){
//                     swap(nums[j], nums[j+1]);
//                 }
//                 else{
//                     break;
//                 }
//             }
//         }
//     }
// };
