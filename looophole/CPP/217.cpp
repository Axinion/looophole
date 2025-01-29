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
