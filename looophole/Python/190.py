class Solution:
    def reverseBits(self, n: int) -> int:
        i = 31
        ans = 0
        while(n!=0):
            b = n&1
            ans = (b*(2**i)) + ans
            i-=1
            n = n>>1
        return ans