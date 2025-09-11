// Solution 1 -> Sorting , Unordered_map + chaining

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;
        for(const auto& s: strs){
            string ss = s;
            sort(ss.begin(), ss.end());
            ans[ss].push_back(s);
        }
        vector<vector<string>> res;
        for(auto& pair: ans){
            res.push_back(pair.second);
        }
        return res;
    }
};


// SOlution 2 -> Unordered_map + chaining, making keys

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;
        for(const auto& s: strs){
            vector<int> count(26,0);
            for(char c:s){
                count[c-'a']++;
            }
            string key = to_string(count[0]);
            for(int i=1;i<26;i++){
                key += ',' + to_string(count[i]);
            }
            ans[key].push_back(s);
        }
        vector<vector<string>> res;
        for(const auto& pair: ans){
            res.push_back(pair.second);
        }
        return res;
    }
};
