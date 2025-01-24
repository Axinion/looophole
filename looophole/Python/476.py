# include<math.h>
class Solution:
    def findComplement(self, num: int) -> int:
        i, ans = 0,0
        while(num!=0):
            b = num&1
            if b==1:
                b=0
            else:
                b=1
            ans = (b*(2**i)) + ans
            i+=1
            num = num>>1
        return ans
        