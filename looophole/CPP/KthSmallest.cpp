// GFG
// Solution -> using heaps

// User function template for C++
#include <queue>
class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        
        priority_queue<int> pq(arr.begin(), arr.begin()+k);
        
        for(int i=k;i<arr.size();i++){
            if(arr[i]<pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }
};
