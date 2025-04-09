// Solution 1: (brute force)

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int c = 0;
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(nums[i]+nums[j]<target){
                    c+=1;
                }
            }
        }
        return c;
    }
};

// Solution 2: (2-pointers, sorting)

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int c = 0;
        int i = 0;
        int j = nums.size()-1;
        while(i<j){
            if(nums[i] + nums[j]<target){
                c+= j-i;
                i++;
            }
            else{
                j--;
            }
        }
        return c;
    }
};
