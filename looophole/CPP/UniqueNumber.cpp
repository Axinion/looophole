// Solution 1 -> Hashmap

class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        // Code here.
        vector<int> ans;
        unordered_map<int, int> seen;
        for(int x: arr){
            seen[x]++;
        }
        for(auto pair: seen){
            if(pair.second == 1){
                ans.push_back(pair.first);
            }
        }
        if(ans[0]>ans[1]){
            swap(ans[0], ans[1]);
        }
        return ans;
    }
};


// Solution 2 -> Bit Manipulation

class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        // Code here.
        int xy = 0;
        for(int v: arr){
            xy = xy^v;
        }
        int mask = xy & -xy;
        int a = 0, b = 0;
        for(int v: arr){
            if(v&mask){
                a = a^v;
            }
            else{
                b = b^v;
            }
        }
        if(a>b){
            swap(a, b);
        }
        return {a, b};
    }
};
