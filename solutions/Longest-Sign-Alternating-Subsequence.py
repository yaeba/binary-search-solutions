class Solution:
    def solve(self, nums):
        if not nums:
            return 0
        return sum(a * b < 0 for a, b in zip(nums, nums[1:])) + 1
