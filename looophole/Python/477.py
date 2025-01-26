class Solution:
    def totalHammingDistance(self, nums: List[int]) -> int:
        ans = 0
        n = len(nums)
        for bit in range(32):
            count_ones = 0
            for num in nums:
                if num & (1 << bit):
                    count_ones += 1
            count_zeros = n - count_ones
            ans += count_ones * count_zeros
            
        return ans
