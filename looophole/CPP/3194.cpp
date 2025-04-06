class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> ans;
        sort(nums.begin(), nums.end());
        int start = 0;
        int end = nums.size()-1;
        while(start<end){
            double d = ((nums[start]+ nums[end])/2.0);
            ans.push_back(d);
            start++;
            end--;
        }
        sort(ans.begin(), ans.end());
        return ans[0];
    }
};
