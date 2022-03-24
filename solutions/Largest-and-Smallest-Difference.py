class Solution:
    def solve(self, nums, k):
        nums = sorted(nums)
        return min(b - a for a, b in zip(nums, nums[k - 1 :]))
