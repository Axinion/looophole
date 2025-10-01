// GFG Problem:

// Solution1:

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int a = arr[arr.size()-1];
        arr.pop_back();
        arr.insert(arr.begin(), a);
    }
};

// Solution 2:
class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int i=0;
        int j = arr.size()-1;
        while(i<j){
            swap(arr[i], arr[j]);
            i++;
        }
    }
};
