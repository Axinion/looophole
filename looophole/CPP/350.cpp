class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        if(nums1.size()<nums2.size()){
            swap(nums1, nums2);
        }
        unordered_map<int, int> freq;
        for(int i: nums1){
            freq[i]++;
        }
        for(int j: nums2){
            if(freq[j]>0){
                res.push_back(j);
                freq[j]--;
            }
        }
        return res;
    }
};
