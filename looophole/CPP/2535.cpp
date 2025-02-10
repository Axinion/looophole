// Solution 1

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        int l = nums.size();
        for(int i=0;i<l;i++){
            sum1 = sum1+=nums[i];
            while(nums[i]!=0){
                int d = nums[i]%10;
                sum2 = sum2 + d;
                nums[i] = nums[i]/10;
            }
        }
        return abs(sum1-sum2);
    }
};
