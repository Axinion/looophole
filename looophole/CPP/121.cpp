// Solution 1 -> Variable Sliding Window

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int mp = 0;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                int p = prices[r] - prices[l];
                mp = max(mp, p);
            }
            else{
                l = r;
            }
            r++;
        }
        return mp;
    }
};
