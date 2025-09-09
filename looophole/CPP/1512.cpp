// Solution 1: (using maps)

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> m;
        for(int i: nums){
            m[i]++;
        }
        for(auto i: m){
            if(i.second>1){
                ans = ans + ((i.second)*(i.second-1)/2);
            }
        }
        return ans;
    }
};

// Solution 2: (using arrays)

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int a[101] = {0};
        for(int i: nums){
            a[i]++;
        }
        int ans = 0;
        for(int i: a){
            ans = ans + ((i)*(i-1)/2);
        }
        return ans;
    }
};
