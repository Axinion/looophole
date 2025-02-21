// 54 -> Spiral Matrix

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int count = 0;
        int row = matrix.size();
        int col = matrix[0].size();
        int total = row*col;

        int sr = 0;
        int sc = 0;
        int er = row-1;
        int ec = col-1;

        while(count<total){
            for(int index = sc; count<total && index<=ec;index++){
                ans.push_back(matrix[sr][index]);
                count+=1;
            }
            sr++;

            for(int index = sr; count<total && index<=er;index++){
                ans.push_back(matrix[index][ec]);
                count+=1;
            }
            ec--;

            for(int index = ec; count<total && index>=sc;index--){
                ans.push_back(matrix[er][index]);
                count+=1;
            }
            er--;

            for(int index = er; count<total && index>=sr;index--){
                ans.push_back(matrix[index][sc]);
                count+=1;
            }
            sc++;
        }
        return ans;
    }
};
