// Solution 1: (Without Hashmap)

class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[26] = {0};
        int b[26] = {0};
        for(int i=0;i<s.size();i++){
            a[s[i]- 'a']++;
        }
        for(int i=0;i<t.size();i++){
            b[t[i]- 'a']++;
        }
        for(int i=0; i<26;i++){
            if(a[i]!=b[i]){
                return false;
            }
            else{
                continue;
            }
        }
        return true;
    }
};


// Solution 2:

