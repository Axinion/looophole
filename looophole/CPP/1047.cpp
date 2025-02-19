// Solution 1

/*
class Solution {
public:
    string removeDuplicates(string s) {
        for(int i=1;i<s.length();i++){
            if(s[i] == s[i-1]){
                s.erase(i-1,2);
                i = 0;
            }
        }
        return s;
    }
};

// Solution 2

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(char c: s){
            if(!st.empty() && st.top()==c){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        string res = "";
        while(!st.empty()){
            res = st.top() + res;
            st.pop();
        }
        return res;
    }
};

*/

// Solution 3

class Solution {
public:
    string removeDuplicates(string s) {
        int i = 0;
        
        for (int j = 0; j < s.length(); j++, i++) {
            s[i] = s[j];
            if (i > 0 && s[i] == s[i - 1]) {
                i -= 2;
            }
        }
        
        return s.substr(0, i);
    }
};
