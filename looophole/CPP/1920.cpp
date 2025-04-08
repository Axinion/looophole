// Solution 1:

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            int a = nums[nums[i]];
            res.push_back(a);
        }
        return res;
    }
};

// Solution 2: (O(1) Space Complexity) 

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            nums[i] = nums[i] + (nums[nums[i]] % n) * n;
        }
        for(int i=0;i<n;i++){
            nums[i] = nums[i]/n;
        }
        return nums;
    }
};
