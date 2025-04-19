// Solution 1:

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};

// Solution 2: (2 pointer)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        vector<int> res(n);
        int j=n-1;
        int pos = n-1;
        while(i<=j){
            if(abs(nums[i])>abs(nums[j])){
                res[pos] = nums[i]*nums[i];
                i+=1;
            }
            else{
                res[pos] = nums[j]*nums[j];
                j-=1;
            }
            pos-=1;
        }
        return res;
    }
};
