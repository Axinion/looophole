// Solution 1: (without 2 pointers)

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int> res;
        for(int i=0;i<=n;i++){
            if(nums[i]%2==0){
                res.push_back(nums[i]);
            }
        }
        for(int i=0;i<=n;i++){
            if(nums[i]%2!=0){
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};

// Solution2: (With 2 pointers)

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        while(i<j){
            if(nums[i]%2!=0 && nums[j]%2==0){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
            if(nums[i]%2==0){
                i++;
            }
            if(nums[j]%2!=0){
                j--;
            }
        }
        return nums;
    }
};
