import itertools as it


class Solution:
    def solve(self, nums):
        return [list(group) for _, group in it.groupby(nums)
