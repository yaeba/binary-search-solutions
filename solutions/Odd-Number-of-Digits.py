class Solution:
    def solve(self, nums):
        return sum([1 for x in nums if len(str(x)) % 2 == 1])
