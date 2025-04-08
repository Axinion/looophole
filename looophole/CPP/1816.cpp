class Solution {
public:
    string truncateSentence(string s, int k) {
        string z = "";
        int c = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                c+=1;
            }
            if(c<k){
                z = z+s[i];
            }
        }
        return z;
    }
};
