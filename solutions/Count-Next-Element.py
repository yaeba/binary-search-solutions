class Solution:
    def solve(self, nums):
        s = set(nums)
        return sum([1 for x in nums if (x + 1) in s])
