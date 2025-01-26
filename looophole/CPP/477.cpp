class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int sum = 0;
        int l = nums.size();
        for(int i = 0; i<l-1;i++){
            for(int j=i+1; j<l;j++){
                int a = nums[i]^nums[j];
                int b = __builtin_popcount(a);
                sum = sum + b;
            }
        }
        return sum;
    }
};