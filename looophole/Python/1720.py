class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        ans = []
        ans.append(first)
        i=0
        while(i<len(encoded)):
            a = encoded[i]^ans[i]
            ans.append(a)
            i+=1
        return ans
        