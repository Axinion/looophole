// Solution 1 (Normal)

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        int s = 0;
        for(int i=0;i<nums.size();i++){
            s = s + nums[i];
            sum.push_back(s);
        }
        return sum;
    }
};


// Solution 2 (Prefix sum)

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        ans[0] = nums[0];
        for(int i=1;i<n;i++){
            ans[i] = ans[i-1] + nums[i];
        }
        return ans;
    }
};


// Solution 3 (Prefix sum) (in place)

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        for(int i=1;i<n;i++){
            nums[i] = nums[i-1] + nums[i];
        }
        return nums;
    }
};
