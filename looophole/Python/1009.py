class Solution:
    def bitwiseComplement(self, n: int) -> int:
        ans = 0
        i = 0
        if n==0:
            return 1
        while(n>0):
            bit = n&1
            if(bit==1):
                n_bit = 0
            else:
                n_bit = 1
            ans = (n_bit * 2**i) + ans
            n=n>>1
            i+=1
        return ans
        