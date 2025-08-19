// Solution 1

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] + nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};

// Solution 2 (Using a hashtable)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for(int i=0;i<nums.size();i++){
            int comp = target - nums[i];

            if(seen.find(comp) != seen.end()){
                return {seen[comp], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};
