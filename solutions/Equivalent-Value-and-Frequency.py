class Solution:
    def solve(self, nums):
        return any(k == v for (k, v) in Counter(nums).items())
