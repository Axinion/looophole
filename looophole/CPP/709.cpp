class Solution {

public:
    string toLowercase(string str) {
        transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ 
            return tolower(c); });
        return str;
    }

public:
    string toLowerCase(string s) {
        string res = toLowercase(s);
        return res;
    }
};
