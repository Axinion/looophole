// Solution 1:

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> res;
        for(int i=0;i<words.size();i++){
            int a = -1;
            a = words[i].find(x);
            if(a>=0){
                res.push_back(i);
            }
        }
        return res;
    }
};

// Solution 2: (not optimal just cleeaner)

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> res;
        for (int i = 0; i < words.size(); ++i) {
            if (words[i].find(x) != string::npos) {
                res.push_back(i);
            }
        }
        return res;
    }
};
