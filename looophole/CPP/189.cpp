// solution 1 -> reverse multiple times

/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int l = nums.size();
        k = k%l;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};
*/

// solution 2 -> cyclic rotation

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int l = nums.size();
        vector<int> temp(l);
        for(int i=0;i<l;i++){
            temp[((i+k)%l)] = nums[i];
        }
        nums = temp;
    }
};

