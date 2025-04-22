// Solution 1:

class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> res;
        for(int i=0; i<nums.size();i++){
            if(nums[i]%2==0){
                res.push_back(0);
            }
            else{
                res.push_back(1);
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};

// Soution 2:

class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        //vector<int> res;
        for(int i=0; i<nums.size();i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }
            else{
                nums[i]=1;
            }
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};
