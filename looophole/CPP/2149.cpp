// Solution 1:

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        vector<int> ps;
        vector<int> nv;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ps.push_back(nums[i]);
            }
            else{
                nv.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size()/2;i++){
            ans.push_back(ps[i]);
            ans.push_back(nv[i]);
        }
        return ans;
    }
};
