// GFG -> Binary Search problem

class Solution {
  public:
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        int s = 1;
        int n = stalls.size();
        sort(stalls.begin(), stalls.end());
        int e = stalls[n-1] - stalls[0];
        int ans, count, pos;
        while(s<=e){
            int mid = s + (e-s)/2;
            count = 1;
            pos = stalls[0];
            for(int i=0;i<n;i++){
                if(pos + mid <= stalls[i]){
                    count++;
                    pos = stalls[i];
                }
            }
            if(count<k){
                e = mid - 1;
            }
            else{
                ans = mid;
                s = mid + 1;
            }
        }
        return ans;
    }
};
