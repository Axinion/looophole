// Solution 1 -> Using Selection Sort

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i=0;i<heights.size()-1;i++){
            int max = i;
            for(int j=i;j<heights.size();j++){
                if(heights[j]>heights[max]){
                    max = j;
                }
            }
            swap(heights[max], heights[i]);
            swap(names[max], names[i]);
        }
        return names;
    }
};
