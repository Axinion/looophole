class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i=0;i<s.size();i++){
            int v = s[i];
            int real = v-96;
            int final = abs(real-27);
            sum = sum + (final*(i+1));
        }
        return sum;
    }
};
