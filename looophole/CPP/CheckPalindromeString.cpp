// Recursion
// Solution 1
string value(string& str){
    if(str.empty()){
        return "";
    }
    char last = str.back();
    str.pop_back();
    return last + value(str);
}

bool isPalindrome(string& str) {
    string temp = str;
    string ans = value(temp);
    return ans == str;
}

// Solution 2 (GFG)

class Solution {
  public:
  
    bool check(int i, int j, string& s){
        //base case
        if(i>j){
            return true;
        }
        if(s[i]!=s[j]){
            return false;
        }
        else{
            return check(i+1, j-1, s);
        }
    }
  
    bool isPalindrome(string& s) {
        // code here
        bool ans = check(0, s.length()-1, s);
        return ans;
    }
};
