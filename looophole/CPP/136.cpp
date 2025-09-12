// Solution 1 -> Bit Manupilation - ExOR

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = nums[0];
        for(int i=1; i<nums.size(); i++){
            ans = ans^nums[i];
        }
        return ans;
    }
};


// Solution 2 -> HashSet

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) {
                seen.erase(num);
            } else {
                seen.insert(num);
            }
        }
        return *seen.begin();
    }
};
