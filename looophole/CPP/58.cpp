// Solution 1

class Solution {
public:
    int lengthOfLastWord(string s) {
        int c = 0;
        int i = s.size()-1;
        while(i>=0 && s[i]==' '){
            i-=1;
        }
        while(i>=0 && s[i]!=' '){
            c+=1;
            i-=1;
        }
        return c;
    }
};
