// Solution 1

class Solution {
public:
    bool check(vector<int>& nums) {
        int c = 0;
        int l = nums.size();
        for(int i=1;i<l;i++){
            if(nums[i-1]> nums[i]){
                c+=1;
            }
        }
        if(nums[l-1]>nums[0]){
            c+=1;
        }
        return c<=1;
    }
};
