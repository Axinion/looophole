class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        a = x^y
        ans = bin(a).count('1')
        return ans
        