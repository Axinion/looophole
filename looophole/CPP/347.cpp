// Solution 1: (mine) -> Hashmap 
// Final Complexity
//Time: O(n + k·m), worst-case O(n²).
//Space: O(m + k), worst-case O(n).

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> freq;
        for(int x: nums){
            freq[x]++;
        }
        for(int i=0;i<k;i++){
            int maxElem = 0;
            int maxFreq = -1;
            for(auto k: freq){
                if(k.second>maxFreq){
                    maxFreq = k.second;
                    maxElem = k.first;
                }
            }
            ans.push_back(maxElem);
            freq.erase(maxElem);
        }
        return ans;
    }
};
