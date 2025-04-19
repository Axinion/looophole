// Solution 1:

class Solution {

public:
    vector<int> Swp(vector<int>& nums){
        vector<int> res;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                res.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                res.push_back(nums[i]);
            }
        }
        nums = res;
        return nums;
    }

public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                nums[i-1] = nums[i-1]*2;
                nums[i] = 0;
            }
        }
        nums = Swp(nums);
        return nums;
    }
};

// Solution 2:

class Solution {

public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                nums[i-1] = nums[i-1]*2;
                nums[i] = 0;
            }
        }
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j] = nums[i];
                j++;
            }
        }
        while(j<nums.size()){
            nums[j]=0;
            j++;
        }
        return nums;
    }
};
