// Solution 1 -> Easy but too much to code(confusing)

#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    stack<int> st;
    for(char ch: s){
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }
        else{
            if(ch == ')'){
                bool isRed = true;
                while(st.top() != '('){
                    char z = st.top();
                    if(z == '+' || z == '-' || z == '*' || z == '/'){
                        isRed = false;
                    }
                    st.pop();
                }
                if(isRed){
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}
