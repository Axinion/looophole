// Solution 1

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(findPalindrome(words[i])){
                return words[i];
            }
        }
        return "";
    }
private:
    bool findPalindrome(string z){
        int st = 0;
        int e = z.size()-1;
        while(st<e){
            if(z[st]!=z[e]){
                return false;
            }
            st+=1;
            e-=1;
        }
        return true;
    }
};
