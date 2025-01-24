class Solution {
public:
    int findComplement(int num) {
        int i=0;
        int ans = 0;
        while(num!=0){
            int b = num&1;
            if(b==1){
                b=0;
            }
            else{
                b=1;
            }
            ans = (b*pow(2,i))+ans;
            i+=1;
            num = num>>1;
        }
        return ans;
    }
};