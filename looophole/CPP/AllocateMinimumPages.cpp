// GFG -> Allocate Minimum Pages -> Good Question(Binary Sort)

class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if(k>n){
            return -1;
        }
        long long s = *max_element(arr.begin(), arr.end());
        long long e = accumulate(arr.begin(), arr.end(), 0);
        long long ans = -1;
        while(s<=e){
            long long mid = s + (e-s)/2;
            long long maxpages = 0;
            int count = 1;
            for(int i=0;i<n;i++){
                maxpages += arr[i];
                if(maxpages>mid){
                    count++;
                    maxpages = arr[i];
                }
            }
            if(count<=k){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return (int)ans;
    }
};
