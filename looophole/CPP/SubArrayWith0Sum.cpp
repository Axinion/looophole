// Method: unordered_map + prefixSum


// class Solution {
//   public:
//     // Complete this function
//     // Function to check whether there is a subarray present with 0-sum or not.
//     bool subArrayExists(vector<int>& arr) {
//         unordered_map<int, int> freq;
//         freq[0] = 1;
//         int total = 0;
//         for(int x: arr){
//             total += x;
//             freq[total]++;
//             if(freq[total]>1){
//                 return true;
//             }
//         }
//         return false;
//     }
// };


// Method: unordered_set + prefixSum

class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with a 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        unordered_set<int> seen;
        seen.insert(0);
        int total = 0;
        for(int x: arr){
            total += x;
            if(seen.count(total)){
                return true;
            }
            seen.insert(total);
        }
        return false;
    }
};
