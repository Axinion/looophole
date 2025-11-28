// Sliding Window + Prefix Sum

class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long count = 0, preSum = 0;
        int start = 0, end = 0;
        while(end<nums.size()){
            preSum += nums[end];
            long long prod = preSum * (end - start + 1);
            while(prod>=k){
                preSum -= nums[start];
                start++;
                prod = preSum * (end - start + 1);
            }
            count += end - start + 1;
            end++;
        }
        return count;
    }
};
