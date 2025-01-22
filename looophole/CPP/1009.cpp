
#include<math.h>
class Solution {
public:
    int bitwiseComplement(int n) {
        int ans = 0;
        int i=0;
        if(n==0){
                return 1;
            }
        while(n>0){
            bool bit = n&1;
            int n_bit = 0;
            if(bit==1){
                n_bit = 0;
            }
            else{
                n_bit = 1;
            }
            ans = (n_bit*(pow(2,i)))+ans;
            n = n>>1;
            i += 1;
        }
        return ans;
    }
};