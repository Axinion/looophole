// Solution -> GFG

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int sum = 0;
        int maxSum = arr[0];
        for(int i=0;i<arr.size();i++){
            sum = sum + arr[i];
            maxSum = max(sum, maxSum);
            if(sum<0){
                sum = 0;
            }
        }
        return maxSum;
    }
};
