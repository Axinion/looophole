// Solution 1 -> 2 Pointers

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

// Solution 2 -> using 1 pointer

#include <bits/stdc++.h>
using namespace std;

void reverse(int i, int size, string& s){
    if(i>size-i-1){
        return;
    }
    swap(s[i], s[size-i-1]);
    i++;
    reverse(i, size, s);
}

int main() {
    string s;
    cin>>s;
    int i = 0;
    int sz = s.size();
    reverse(i,sz,s);
    cout<<s;
}
