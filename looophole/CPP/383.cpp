// Solution 1 - (mine)

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        for(int i=0;i<magazine.length();i++){
            m[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++){
            if(m[ransomNote[i]]>0){
                m[ransomNote[i]]--;
            }
            else {
                return false;
            }
        }
        return true;
    }
};


// Solution 2
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a[26] = {0};
        for( char i: magazine){
            a[i - 'a']++;
        }
        for(char i: ransomNote){
            a[i - 'a']--;
            if(a[i - 'a']<0){
                return false;
            }
        }
        return true;
    }
};
