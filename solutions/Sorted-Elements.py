class Solution:
    def solve(self, nums):
        return sum([1 for (x, y) in zip(nums, sorted(nums)) if x == y])
