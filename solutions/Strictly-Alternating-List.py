class Solution:
    def solve(self, nums):
        diffs = [b - a for a, b in zip(nums, nums[1:])]
        return all(diffs) and diffs[0] > 0
