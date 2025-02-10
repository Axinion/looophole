//solution 1 -> 2 pointer method

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = nums.size();
        int i = 0;
        //int j=i+1;
        for(int j=0;j<l;j++){
            if(nums[j]!=0){
                swap(nums[i], nums[j]);
                i+=1;
            }
        }
    }
};
