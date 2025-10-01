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

// Solution 3:
#include <algorithm>
class Solution {
  public:
    void rotate(vector<int>& arr) {
        if (arr.size() <= 1) return;
        reverse(arr.begin(), arr.end());
        reverse(arr.begin()+1, arr.end());
    }
};

// Solution 4 -> Better than solution 2

class Solution {
  public:
    void rotate(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return;
        int last = arr[n-1];
        for (int i = n-1; i > 0; --i) arr[i] = arr[i-1];
        arr[0] = last;
    }
}
