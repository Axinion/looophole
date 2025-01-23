class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        i, j, tsum, sum = 0,0,0,0
        while(i<=n):
            tsum = tsum + i
            i+=1
        while(j<n):
            sum = sum + nums[j]
            j+=1
        return tsum - sum