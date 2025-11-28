// (unorderd_map + ((prefix sum%k + k)% k))

// class Solution {
// public:
//     int subarraysDivByK(vector<int>& nums, int k) {
//         unordered_map<int, int> freq;
//         int preSum = 0;
//         int count = 0;
//         freq[0] = 1;
//         for(int x: nums){
//             preSum += x;
//             int modo = ( (preSum % k) + k ) % k;
//             count += freq[modo];
//             freq[modo]++;
//         }
//         return count;
//     }
// };


// Using vector + ((prefix sum%k + k)% k)

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> freq(k, 0);
        int preSum = 0;
        int count = 0;
        freq[0] = 1;
        for(int x: nums){
            preSum += x;
            int modo = ( (preSum % k) + k ) % k;
            count += freq[modo];
            freq[modo]++;
        }
        return count;
    }
};
