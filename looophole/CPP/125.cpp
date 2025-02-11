// Solution 1

class Solution {
public:

string processString(string input){
    string result;
    for(char c: input){
        if(isalnum(c)){
            result += tolower(c);
        }
    }
    return result;
}
    bool isPalindrome(string s) {
        string a = processString(s);
        string b = a;
        reverse(b.begin(),b.end());
        if(a==b){
            return true;
        }
        else{
            return false;
        }
    }
};

// Solution 2

class Solution {
public:

string processString(string input){
    string result;
    for(char c: input){
        if(isalnum(c)){
            result += tolower(c);
        }
    }
    return result;
}
    bool isPalindrome(string s) {
        string a = processString(s);
        cout<<a;
        int i = 0;
        int e = a.size()-1;
        while(i<e){
            if(a[i]!=a[e]){
                return false;
            }
            i+=1;
            e-=1;
        }
        return true;
    }
};
