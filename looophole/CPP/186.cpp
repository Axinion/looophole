// Premium leetcode question

#include <iostream>
#include <vector>
#include <algorithm> // For reverse
using namespace std;

void reverseWords(vector<char>& s) {
    int n = s.size();

    // Step 1: Reverse the entire string
    reverse(s.begin(), s.end());

    // Step 2: Reverse each word in the reversed string
    int start = 0; // Start index of a word
    for (int end = 0; end < n; end++) {
        if (s[end] == ' ' || end == n - 1) {
            // If we find a space or reach the end of the string, reverse the word
            if (s[end] == ' ') {
                reverse(s.begin() + start, s.begin() + end);
            } else {
                reverse(s.begin() + start, s.begin() + end + 1);
            }
            start = end + 1; // Move to the next word
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
