#include <bits/stdc++.h>
using namespace std;

void reverse(int i, int j, string& s){
    if(i>j){
        return;
    }
    swap(s[i], s[j]);
    i++;
    j--;
    reverse(i, j, s);
}

int main() {
    string s;
    cin>>s;
    int i = 0;
    int j = s.size()-1;
    reverse(i,j,s);
    cout<<s;
}
