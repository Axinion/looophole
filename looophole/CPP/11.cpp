// Solution 1 -> Two Pointers
// (change index for min height)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int marea = 0;
        int r = height.size()-1;
        int l = 0;
        while(l<r){
            int area = min(height[l], height[r]) * (r-l);
            marea = max(marea, area);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return marea;
    }
};
