// Solution: Greedy + Two Pointers

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int i = 0;
        int j = s.size();
        vector<int> res;
        for(int k=0;k<s.size();k++){
            if(s[k]=='I'){
                res.push_back(i);
                i++;
            }
            else{
                res.push_back(j);
                j--;
            }
        }
        res.push_back(i);
        return res;
    }
};
