// Solution 1

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int index = -1;
        for(int i=0;i<n;i++){
            if(word[i]==ch){
                index = i;
                break;
            }
            else{
                index = -1;
            }
        }
        if(index!=-1){
            int s = 0;
            int e = index;
            while(s<e){
                swap(word[s], word[e]);
                s+=1;
                e-=1;
            }
            return word;
        }
        return word;
    }
};
