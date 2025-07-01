// Without Backtracking

class Solution {

private:
    void solve(vector<int> nums, int index, vector<vector<int>> &ans){
        // base case
        if(index>=nums.size()){
            ans.push_back(nums);
            return ;
        }
        // recursion
        for(int j = index; j<nums.size(); j++){
            swap(nums[index], nums[j]);
            solve(nums, index+1, ans);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index =0;
        solve(nums, index, ans);
        return ans;
    }
};

// With Backtracking

class Solution {

private:
    void solve(vector<int> nums, int index, vector<vector<int>> &ans){
        // base case
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }
        // recursion
        for(int i = index; i<nums.size();i++){
            swap(nums[index], nums[i]);
            solve(nums, index+1, ans);
            swap(nums[index], nums[i]);  // backtracking
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, index, ans);
        return ans;
    }
};
