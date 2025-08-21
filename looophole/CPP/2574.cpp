// Solution 1:

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        vector<int> left(n,0);
        vector<int> right(n,0);

        for(int i=1;i<n;i++){
            left[i] = left[i-1] + nums[i-1];
        }

        for(int i=n-2;i>=0;i--){
            right[i] = right[i+1] + nums[i+1];
        }

        for(int i=0;i<n;i++){
            ans[i] = abs(left[i] - right[i]);
        }
        return ans;
    }
};


// Solution 2: Optimized

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);

        int totalSum = 0;
        for(int x : nums){
            totalSum += x;
        }

        int prefix = 0;
        for(int i=0;i<n;i++){
            int left = prefix;
            int right = totalSum-prefix-nums[i];
            ans[i] = abs(left-right);
            prefix += nums[i];
        }
        return ans;
    }
};
