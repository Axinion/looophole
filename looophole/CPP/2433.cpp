// Solution 1:

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        ans.push_back(pref[0]);
        for(int i=1;i<pref.size();i++){
            int res = pref[i-1] ^ pref[i];
            ans.push_back(res);
        }
        return ans;
    }
};


// Solution 2: (More Optimized)

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans(pref.size());
        ans[0] = pref[0];
        for(int i=1;i<pref.size();i++){
            ans[i] = pref[i-1] ^ pref[i];
        }
        return ans;
    }
};
