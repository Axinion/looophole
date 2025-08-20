// Solution 1:

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = nums.size()-1;
        int c = 0;
        while(i<j){
            if(nums[i]==val && nums[j]!=val){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
            else if(nums[i]!=val){
                i++;
            }
            else if(nums[j]==val){
                j--;
            }
        }
        for(int i=0; i<nums.size();i++){
            if(nums[i]==val){
                c++;
            }
        }
        return nums.size() - c;
    }
};

// Solution 2:

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
