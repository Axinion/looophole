// Solution 1 -> (len + specific char eg: '#')

class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(string x: strs){
            s = s + to_string(x.length()) + '#';
            s += x;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;
        while(i<s.length()){
            int j = i;
            while(s[j]!='#'){
                j++;
            }
            int len = stoi(s.substr(i, j-i));
            string word = s.substr(j+1, len);
            res.push_back(word);
            i = j+1+len;
        }
        return res;
    }
};
