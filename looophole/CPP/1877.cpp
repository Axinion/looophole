// Solution 1:

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int sum = -1;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<n/2;i++){
            int a = nums[i] + nums[n-i-1];
            sum = max(sum, a);
        }
        return sum;
    }
};

// Solution 2: -> Tiny bit optimized

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int sum = -1;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0, j = n-1;
        while (i < j) {
            sum = max(sum, nums[i] + nums[j]);
            i++;
            j--;
        }
        return sum;
    }
};
