// Solution 1

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int tsum = 0;
        int i = 0;
        int j = 0;
        while(i<=n){
            tsum = tsum + i;
            i+=1;
        }
        while(j<n){
            sum = sum + nums[j];
            j+=1;
        }
        return tsum-sum;
    }
};


// Solution 2

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            ans = ans^nums[i];
        }
        for(int i=0;i<=nums.size();i++){
            ans = ans^i;
        }
        return ans;
    }
};
