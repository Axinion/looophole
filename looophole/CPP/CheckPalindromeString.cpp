// Recursion

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
