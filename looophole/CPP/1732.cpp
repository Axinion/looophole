// Solution (prefix Sum)

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int maxi = INT_MIN;
        vector<int> ans(n+1,0);
        for(int i=1;i<=n;i++){
            ans[i] = ans[i-1] + gain[i-1];
            if(ans[i]>maxi){
                maxi = ans[i];
            }
        }
        if(maxi<0){
            return 0;
        }
        return maxi;
    }
};
