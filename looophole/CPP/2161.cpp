// Solution 1

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                res.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot){
                res.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot){
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};

// Solution 2

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less;
        vector<int> equal;
        vector<int> more;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                less.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                more.push_back(nums[i]);
            }
            else{
                equal.push_back(nums[i]);
            }
        }
        less.insert(less.end(), equal.begin(), equal.end());
        less.insert(less.end(), more.begin(), more.end());
        return less;
    }
};

// Solution 3:


