// Using Recursion

class Solution {
    
    int find(vector<int>& arr, int index, int x){
        if(index==arr.size()){
            return -1;
        }
        else if(arr[index]==x){
            return index;
        }
        else{
            return find(arr, index+1, x);
        }
    }
    
  public:
    int search(vector<int>& arr, int x) {
        // code here
        int ans = find(arr, 0, x);
        return ans;
    }
};
