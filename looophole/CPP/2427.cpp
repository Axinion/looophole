class Solution {
public:
    int commonFactors(int a, int b) {
        int mi = min(a, b);
        int cnt = 0;
        for(int i=1;i<=mi;i++){
            if(a%i==0 && b%i==0){
                cnt+=1;
            }
        }
        return cnt;
    }
};
