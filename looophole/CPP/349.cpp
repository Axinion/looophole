// Solution 1 - Hashmap

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        set<int> ans;
        unordered_map<int, int> freq;
        for(int i: nums1){
            freq[i]++;
        }
        for(int j: nums2){
            if(freq.count(j)==1){
                freq[j]--;
                ans.insert(j);
            }
            else{
                continue;
            }
        }
        for(int i: ans){
            res.push_back(i);
        }
        return res;
    }
};

// Solution 2

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            swap(nums1, nums2);
        }
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> res;
        res.reserve(min(s1.size(), nums2.size()));

        for(int x: nums2){
            if(s1.count(x)){
                res.insert(x);
            }
        }
        return vector<int>(res.begin(), res.end());
    }
};
