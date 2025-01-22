class Solution:
    def reverse(self, x: int) -> int:
        min_value = -2**31
        max_value = 2**31 - 1
        is_negative = 0
        ans = 0
        while x!=0:
            if x<0:
                is_negative = 1
            x = abs(x)
            d = x%10
            if((ans<(min_value/10)) | (ans > (max_value/10))):
                return 0
            ans = (ans*10) + d
            x = x//10
        if is_negative:
            return ans*(-1)
        else:
            return ans
