// Solution 1:

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> ans;
        int majority = nums.size()/2;
        for(int num: nums){
            ans[num]++;

            if(ans[num] > majority){
                return num;
            }
        }
        return -1;
    }
};

// Solution 2 (Boyer Moore Majority Algorithm)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = nums[0];
        int count = 0;
        for(int num: nums){
            if(count==0){
                majority = num;
            }
            if(majority==num){
                count++;
            }
            else{
                count--;
            }
        }
        return majority;
    }
};
