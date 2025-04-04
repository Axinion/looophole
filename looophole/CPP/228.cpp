class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.empty()){
            return res;
        }
        int start= nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]+1){
                int end = nums[i-1];
                if(start==end){
                    res.push_back(to_string(start));
                }
                else{
                    res.push_back(to_string(start) + "->" + to_string(end));
                }
                start = nums[i];
            }
        }
         int end = nums.back();
        if (start == end) {
            res.push_back(to_string(start));
        } else {
            res.push_back(to_string(start) + "->" + to_string(end));
        }

        return res;
    }
};
