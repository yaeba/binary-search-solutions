class Solution:
    def solve(self, nums):
        if len(nums) == 0:
            return 0
        return max(Counter(nums).values())
