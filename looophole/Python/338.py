class Solution:
    def countBits(self, n: int) -> List[int]:
        res = []
        i = 0
        for i in range(n+1):
            res.append(bin(i).count('1'))
        return res
