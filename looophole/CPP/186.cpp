// Premium leetcode question

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseWords(vector<char>& s) {
    int n = s.size();
    reverse(s.begin(), s.end());
    int start = 0;
    for (int end = 0; end < n; end++) {
        if (s[end] == ' ' || end == n - 1) {
            if (s[end] == ' ') {
                reverse(s.begin() + start, s.begin() + end);
            } else {
                reverse(s.begin() + start, s.begin() + end + 1);
            }
            start = end + 1;
        }
    }
}

int main() {
    vector<char> s = {'t', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e'};

    cout << "Original: ";
    for (char c : s) cout << c;
    cout << endl;

    reverseWords(s);

    cout << "Reversed: ";
    for (char c : s) cout << c;
    cout << endl;

    return 0;
}
