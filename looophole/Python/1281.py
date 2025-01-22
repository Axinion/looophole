class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        sum = 0
        prod = 1
        while n>0:
            sum = sum + (n%10)
            prod = prod * (n%10)
            n = n//10
        return (prod - sum)