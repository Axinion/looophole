// Solution 1

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char x: s){
            if(x == '(' || x == '[' || x == '{'){
                st.push(x);
            }
            else{
                if(!st.empty()){
                    char ch = st.top();
                    if((ch=='(' && x==')') || (ch=='{' && x=='}') || (ch=='[' && x==']')){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};
