// Leetcode - Binary Search problem

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 0, e = 0, ans;
        long long sum=0;
        for(int x: piles){
            sum += x;
            e = max(e, x);
        }
        s = sum/h;
        if(s==0) s = 1;
        while(s<=e){
            int mid = s + (e-s)/2;
            int tt = 0;
            for(int y: piles){
                tt += y/mid;
                if(y%mid){
                    tt++;
                }
            }
            if(tt>h){
                s = mid + 1;
            }
            else{
                ans = mid;
                e = mid - 1;
            }
        }
        return ans;
    }
};
