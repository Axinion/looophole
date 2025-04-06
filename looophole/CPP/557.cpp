// Solution 1: (not optimized/clean)

class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int space=  0;
        while(s[space]!='\0'){
            if(s[space]!=' '){
                space++;
            }
            else if(s[space]==' '){
                reverse(s.begin() + start, s.begin() + space);
                start = space+1;
                space = space+2;
            }
        }
        reverse(s.begin()+start, s.end());
        return s;
    }
};

// Solution 2: (cleaner)

class Solution {
public:
    string reverseWords(string s) {
        int start = 0;

        for (int i = 0; i <= s.length(); ++i) {
            if (i == s.length() || s[i] == ' ') {
                reverse(s.begin() + start, s.begin() + i);
                start = i + 1;
            }
        }

        return s;
    }
};
