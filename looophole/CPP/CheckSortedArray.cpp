// Coding Ninjas

int isSorted(int n, vector<int> a) {
    
    // base case
    if(n==0 || n==1){
        return 1;
    }
    if(a[0]>a[1]){
        return 0;
    }
    vector<int> sub(a.begin()+1, a.end());
    return isSorted(n-1, sub);
}


// GFG


class Solution {
  public:
  
    bool isSortedHelper(vector<int>& arr, int index){
        // base case
        if(index==arr.size()-1){
            return true;
        }
        if(arr[index]>arr[index+1]){
            return false;
        }
        return isSortedHelper(arr, index+1);
    }
  
    bool isSorted(vector<int>& arr) {
        // code here
        return isSortedHelper(arr, 0);
    }
};
