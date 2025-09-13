// Solution 1 - stack + condition matching

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(const string& x: tokens){
            if(x=="+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b+a);
            }
            else if(x=="-"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b-a);
            }
            else if(x=="*"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b*a);
            }
            else if(x=="/"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b/a);
            }
            else{
                st.push(stoi(x));
            }
        }
        return st.top();
    }
};
