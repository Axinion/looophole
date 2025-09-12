// Solution 1 -> not optimized similar to Two sum

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> res;
        for(int i=0; i<numbers.size();i++){
            int comp = target - numbers[i];
            if(res.count(comp)){
                return {res[comp]+1, i+1};
            }
            res[numbers[i]] = i;
        }
        return {};
    }
};

// Solution 2 -> Just comparision and 2 pointer

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j = numbers.size()-1;
        while(i<j){
            if(numbers[i]+numbers[j]>target){
                j--;
            }
            else if(numbers[i]+numbers[j]<target){
                i++;
            }
            else{
                return {i+1, j+1};
            }
        }
        return {};
    }
};
