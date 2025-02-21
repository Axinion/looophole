// 59 -> Spiral Matrix II

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int total = n*n;
        int count = 1;

        int sr = 0;
        int sc = 0;
        int er = n-1;
        int ec = n-1;

        while(count<=total){
            for(int index = sc; count<=total && index<=ec;index++){
                ans[sr][index] = count++;
            }
            sr++;

            for(int index = sr; count<=total && index<=er;index++){
                ans[index][ec] = count++;
            }
            ec--;

            for(int index = ec; count<=total && index>=sc;index--){
                ans[er][index] = count++;
            }
            er--;

            for(int index = er; count<=total && index>=sr;index--){
                ans[index][sc] = count++;
            }
            sc++;
        }
        return ans;
    }
};
