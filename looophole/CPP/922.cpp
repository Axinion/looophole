// Solution 1:

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> r1;
        vector<int> r2;
        vector<int> res;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                r1.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                r2.push_back(nums[i]);
            }
        }
        for(int i=0;i<n/2;i++){
            res.push_back(r1[i]);
            res.push_back(r2[i]);
        }
        return res;
    }
};

// Solution 2: (2 pointer)

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i=0;
        int j=1;
        int n = nums.size();
        while(i<n && j<n){
            if(nums[i]%2==0){
                i+=2;
            }
            else if(nums[j]%2!=0){
                j+=2;
            }
            else{
                swap(nums[i], nums[j]);
                i+=2;
                j+=2;
            }
        }
        return nums;
    }
};
