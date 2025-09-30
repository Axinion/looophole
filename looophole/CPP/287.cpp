// hashmap -> Fails space constraint

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         unordered_map<int, int> seen;
//         for(int x: nums){
//             seen[x]++;
//             if(seen[x]>1){
//                 return x;
//             }
//         }
//         return -1;
//     }
// };


// Sort & Loop -> fails array modification constraint

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]==nums[i-1]){
//                 return nums[i];
//             }
//         }
//         return -1;
//     }
// };


// Floyd Tortoise - Hare Algo:

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        while(slow!=fast);
        fast = nums[0];
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
