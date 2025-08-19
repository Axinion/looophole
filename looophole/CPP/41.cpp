// Solution 1 (Time -> O(n) & Space -> O(n))

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, int> seen;
        int maxi = 0;
        for(int i=0;i<nums.size();i++){
            seen[nums[i]]++;
            maxi = max(maxi, nums[i]);
        }
        for(int i=1;i<=maxi;i++){
            if(seen.count(i)==0){
                return i;
            }
        }
        return maxi+1;
    }
};

// Solution 2 (Time -> O(n) & Space -> O(1))

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            while(nums[i]>0 && nums[i] <= n && nums[nums[i]-1] != nums[i]){
                swap(nums[i], nums[nums[i]-1]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i] != i+1){
                return i+1;
            }
        }
        return n+1;
    }
};
