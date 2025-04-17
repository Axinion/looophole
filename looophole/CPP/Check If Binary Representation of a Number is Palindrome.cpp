#include <bits/stdc++.h> 

string ItB(long long N){
	string s = "";
	while(N>0){
		int d = N%2;
		s = to_string(d) + s;
		N = N/2;
	}
	//reverse(s.begin(), s.end());
	return s;
}

bool CP(string s, int i, int size){
	if(i>=size-i-1){
		return true;
	}
	if(s[i]!=s[size-i-1]){
		return false;
	}
	else{
		return CP(s, i+1, size);
	}
}

bool checkPalindrome(long long N)
{
	string st = ItB(N);
	if(CP(st,0, st.size())){
		return true;
	}
	else{
		return false;
	}
}
