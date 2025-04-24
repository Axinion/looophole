// Soluton 1:

class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        long long res = 0;
        while(i<j){
            string concat = to_string(nums[i])+to_string(nums[j]);
            res+= stoll(concat);
            i++;
            j--;
        }
        if(i==j){
            res += nums[i];
        }
        return res;
    }
};

// Solution 2:

class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        vector<string> ans;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            ans.push_back(to_string(nums[i])+to_string(nums[j]));
            i++;
            j--;
        }
        long long res =0;
        for(int k=0;k<ans.size();k++){
            res = res + stoll(ans[k]);
        }
        if(i==j){
            res += nums[i];
        }
        return res;
    }
};
