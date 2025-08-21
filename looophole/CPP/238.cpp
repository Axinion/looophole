// Solution 1: (Normal(TLE))

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int prd = 1;
        int i=0;
        while(i<nums.size()){
            for(int j=nums.size()-1;j>=0;j--){
                if(j==i){
                    continue;
                }
                else{
                    prd = prd * nums[j];
                }
            }
            ans.push_back(prd);
            prd = 1;
            i++;
        }
        return ans;
    }
};

// solution 2: (Prefix sum -> prefix and suffix pass)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);

        // prefix pass
        int prefix = 1;
        for(int i=0;i<n;i++){
            ans[i] = prefix;
            prefix *= nums[i];
        }

        // suffix pass
        int suffix = 1;
        for(int j=n-1;j>=0;j--){
            ans[j] *= suffix;
            suffix *= nums[j];
        }
        return ans;
    }
};
