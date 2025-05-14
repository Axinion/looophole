// Solution 1

#include <unordered_map>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int v: nums){
            freq[v]++;
            if(freq[v]>1){
                return true;
            }
        }
        return false;
    }
};

// Solution 2

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
            for (int num : nums) {
                if (seen.count(num)) return true;
                seen.insert(num);
            }
            return false;
    }
};
