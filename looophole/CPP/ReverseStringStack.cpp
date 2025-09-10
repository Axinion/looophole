// Reverse String using a Stack

#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main() {
	string inp = "savage";
	
	stack<char> s;
	for(char i: inp){
	    s.push(i);
	}
	
	string ans = "";
	
	while(!s.empty()){
	    char ch = s.top();
	    ans.push_back(ch);
	    s.pop();
	}
	
	cout<< ans<<endl;

}
