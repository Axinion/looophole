// Solution 1:

class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int start = max(0, i-nums[i]);
            for(int j=start;j<=i;j++){
                sum = sum + nums[j];
            }
        }
        return sum;
    }
};

// Solution 2:

class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(n+1, 0);

        for(int i=0;i<n;i++){
            pref[i+1] = pref[i] + nums[i];
        }

        long long ans = 0;
        for(int i=0;i<n;i++){
            int start = max(0, i-nums[i]);
            ans += pref[i+1] - pref[start];
        }
        return (int)ans;
    }
};
