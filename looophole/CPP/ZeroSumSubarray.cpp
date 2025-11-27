// (Method: unorderd_map + prefix sum) - GFG

class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        unordered_map<long long, long long> freq;
        int count = 0;
        int total = 0;
        freq[0] = 1;
        for(int x: arr){
            total += x; 
            count += freq[total];
            freq[total]++;
        }
        return count;
    }
};
