// Binary Search Solution -> Try it again
// O(n) - solution
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int a=1;
        int i=0;
        int c=0;
        while(i<arr.size() && c<k){
            if(a==arr[i]){
                i+=1;
            }
            else{
                c+=1;
                if(c==k){
                    return a;
                }
            }
            a+=1;
        }
        return a+(k-c-1);
    }
};

// O(n) - Solution 2

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int current = 1;
        int idx = 0;
        while(k>0){
            if(idx<arr.size() && arr[idx] == current){
                idx++;
            }
            else{
                k--;
                if(k==0) return current;
            }
            current++;
        }
        return current;
    }
};


// Binary Search Solution

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int s = 0;
        int e = arr.size()-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            int missing = arr[mid] - (mid + 1);
            if(missing<k){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return s + k;
    }
};
