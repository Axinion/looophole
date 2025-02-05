// Solution 1 -> simple loop

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int c1 = 0;
        int c2 = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                c1+=1;
            }
            else if(nums[i]>0){
                c2+=1;
            }
        }
        if(c1>=c2){
            return c1;
        }
        else{
            return c2;
        }
    }
};
