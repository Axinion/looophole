class Solution {
public:
    int countBits(const string& row) {
        int count = 0;
        for (char ch : row) {
            if (ch == '1') count++;
        }
        return count;
    }

    int numberOfBeams(vector<string>& bank) {
        int totalBeams = 0;
        int prevCount = 0;

        for (const string& row : bank) {
            int deviceCount = countBits(row);
            if (deviceCount == 0) continue;

            if (prevCount > 0) {
                totalBeams += prevCount * deviceCount;
            }
            prevCount = deviceCount;
        }

        return totalBeams;
    }
};
