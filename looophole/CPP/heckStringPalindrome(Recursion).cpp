// Solution 1 -> using 2 pointers

#include <bits/stdc++.h>
using namespace std;

bool CheckPalindrome(string s, int i,  int j){
    if(i>j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    else{
        return CheckPalindrome(s, i+1, j-1);
    }
}

int main() {
    string s;
    cin>>s;
    int i = 0;
    int j = s.size()-1;
    if(CheckPalindrome(s,i,j)){
        cout<<"IS PALINDROME";
    }
    else{
        cout<<"NOT A PALINDROME";
    }
    return 0;
}

// Solution 2 -> using 1 pointer

#include <bits/stdc++.h>
using namespace std;

bool CheckPalindrome(string s, int i,  int size){
    if(i>size-i-1){
        return true;
    }
    if(s[i]!=s[size-i-1]){
        return false;
    }
    else{
        return CheckPalindrome(s, i+1, size);
    }
}

int main() {
    string s;
    cin>>s;
    int i = 0;
    int sz = s.size();
    //int j = s.size()-1;
    if(CheckPalindrome(s,i,sz)){
        cout<<"IS PALINDROME";
    }
    else{
        cout<<"NOT A PALINDROME";
    }
    return 0;
}
