class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        a = start^goal
        ans = bin(a).count('1')
        return ans
        