class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int n1 = word1.size();
        int n2 = word2.size();
        int maxi = max(n1,n2);
        for(int i=0;i<maxi;i++){
            if(i<n1){
                res = res + word1[i];
            }
            if(i<n2){
                res = res + word2[i];
            }
        }
        return res;
    }
};
