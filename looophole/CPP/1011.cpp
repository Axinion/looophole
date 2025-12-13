// 1011. Capacity To Ship Packages Within D Days
// Pattern -> Continuous, min - max

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        long long s = *max_element(weights.begin(), weights.end());
        long long e = accumulate(weights.begin(), weights.end(), 0LL);
        long long ans = -1;
        while(s<=e){
            long long mid = s + (e-s)/2;
            long long w = 0;
            int count = 1;
            for(int x: weights){
                w += x;
                if(w>mid){
                    count++;
                    w = x;
                }
            }
            if(count<=days){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return (int)ans;
    }
};
