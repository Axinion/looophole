// Solution -> Hashmap

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> c;
        int maxFreq = 0;
        int maxAns = 0;

        for(int i: nums){
            maxFreq = max(maxFreq, ++c[i]);
        }

        for(auto& [val, freq] : c){
            if(freq == maxFreq){
                maxAns += freq;
            }
        }

        return maxAns;
    }
};
