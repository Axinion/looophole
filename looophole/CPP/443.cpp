// solution 1

class Solution {
public:
    int compress(vector<char>& chars) {
        int writeIndex = 0;
        int readIndex = 0;

        while (readIndex < chars.size()) {
            char currentChar = chars[readIndex];
            int count = 0;
            while (readIndex < chars.size() && chars[readIndex] == currentChar) {
                readIndex++;
                count++;
            }
            chars[writeIndex++] = currentChar;
            if (count > 1) {
                for (char c : to_string(count)) {
                    chars[writeIndex++] = c;
                }
            }
        }
        return writeIndex;
    }
};

// solution 2

/*
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;
        int j = 0;
        int count = 0;
        for (; j < n; j++) {
            count++;
            if (j + 1 == n || chars[j] != chars[j + 1]) {
                chars[i++] = chars[j];
                if (count > 1) {
                    string strCount = to_string(count);
                    for (char c : strCount) {
                        chars[i++] = c;
                    }
                }
                count = 0;
            }
        }
        return i;
    }
};
*/
