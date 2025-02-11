// Solution 1

/*
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
    }
};
*/

// Solution 2

class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0;
        int en = s.size() - 1;
        while(st<en){
            swap(s[st], s[en]);
            st+=1;
            en-=1;
        }
    }
};
