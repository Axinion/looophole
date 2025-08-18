// Solution 1: (Without HashMap)

class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[26] = {0};
        int b[26] = {0};
        int z = 0;
        for(char i:s){
          a[i-'a']++;
        }
        for(char i:t){
          b[i-'a']++;
        }
        for(int i=0;i<26;i++){
          if(a[i]!=b[i]){
            return false;
          }
        }
        return true;
    }
};


// Solution 2:

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
          return false;
        }
        int freq[26] = {0};
        for(int i=0;i<s.length();i++){
          freq[s[i]-'a']++;
          freq[t[i]-'a']--;
        }
        for(int i:freq){
          if(i!=0){
            return false;
          }
        }
        return true;
    }
};

// Solution 3: (Sort and compare)

// Solution 4: (Using HashTable)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
          return false;
        }
        unordered_map<char, int> freq;
        for(int i=0;i<s.length();i++){
          freq[s[i]-'a']++;
          freq[t[i]-'a']--;
        }
        for(auto i:freq){
          if(i.second!=0){
            return false;
          }
        }
        return true;
    }
};
