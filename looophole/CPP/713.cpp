//(Sliding Window)

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        int prod = 1;
        int start = 0, end = 0, count = 0;
        while(end<nums.size()){
            prod *= nums[end];
            while(prod>=k && start<=end){
                prod /= nums[start];
                start++;
            }
            count += end - start + 1;
            end++;
        }
        return count;
    }
};
