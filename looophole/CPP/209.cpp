// Method - Sliding Window

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = INT_MAX;
        int start = 0, end = 0, sum = 0;
        while(end<nums.size()){
            sum += nums[end];
            while(sum >= target){
                l = min(l, (end - start + 1));
                sum -= nums[start++];
            }
            end++;
        }
        if(l==INT_MAX){
            l = 0;
        }
        return l;
    }
};
