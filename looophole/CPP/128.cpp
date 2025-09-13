// Solution 1 -> Brute Force: (TLE)
// Time complexity: O(n2)
// Space complexity: O(n)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> ans(nums.begin(), nums.end());
        int res = 0;
        for(int num: nums){
            int curr = num;
            int streak = 0;
            while(ans.find(curr)!=ans.end()){
                streak++;
                curr++;
            }
            res = max(res, streak);
        }
        return res
    }
};

Solution 2 -> HashSet (TLE)
// Time complexity: O(n)
// Space complexity: O(n)

  class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> res(nums.begin(), nums.end());
        int longest = 0;
        for(int num: nums){
            if(res.find(num-1) == res.end()){
                int length = 1;
                while(res.find(num+length) != res.end()){
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }


// Solution 3 -> Hashmap
// Time complexity: O(n)
// Space complexity: O(n)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;
        int res = 0;

        for (int num : nums) {
            if (!mp[num]) {
                mp[num] = mp[num - 1] + mp[num + 1] + 1;
                mp[num - mp[num - 1]] = mp[num];
                mp[num + mp[num + 1]] = mp[num];
                res = max(res, mp[num]);
            }
        }
        return res;
    }
};
