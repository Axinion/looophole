// Solution 1 -> mine

class Solution {
public:
    int maxVowels(string s, int k) {
        //list<char> vow = {'a', 'e', 'i', 'o', 'u'};
        int winco = 0;
        for(int i=0;i<k;i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                winco++;
            }
        }
        int maxco = winco;
        for(int i=k;i<s.length();i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                winco++;
            }
            if(s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] == 'u'){
                winco--;
            }
            maxco = max(maxco, winco);
        }
        return maxco;
    }
};

// Solution2 -> mine (using list)

class Solution {
public:
    int maxVowels(string s, int k) {
        list<char> vow = {'a', 'e', 'i', 'o', 'u'};
        //if(find(vow.begin(), vow.end(), s[i]) != vow.end())
        int winco = 0;
        for(int i=0;i<k;i++){
            if(find(vow.begin(), vow.end(), s[i]) != vow.end()){
                winco++;
            }
        }
        int maxco = winco;
        for(int i=k;i<s.length();i++){
            if(find(vow.begin(), vow.end(), s[i]) != vow.end()){
                winco++;
            }
            if(find(vow.begin(), vow.end(), s[i-k]) != vow.end()){
                winco--;
            }
            maxco = max(maxco, winco);
        }
        return maxco;
    }
};
