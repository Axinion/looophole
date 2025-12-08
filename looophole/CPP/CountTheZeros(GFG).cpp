// Binary Sort

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int s = 0;
        int e = arr.size() - 1;
        int res = -1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(arr[mid] == 0){
                res = mid;
                e = mid -1;
            }
            else if(arr[mid]>0){
                s = mid +1;
            }
        }
        return (arr.size() - res);
    }
};
