// Solution -> GFG
// Time Complexity: O(n + m)
// Auxiliary Space: O(n + m)

class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        vector<int> res;
        unordered_set<int> seen;
        for(int x: a){
            seen.insert(x);
        }
        for(int y: b){
            seen.insert(y);
        }
        for(int z: seen){
            res.push_back(z);
        }
        return res;
    }
};
