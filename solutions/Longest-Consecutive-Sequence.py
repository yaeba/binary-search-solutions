import itertools as it


class Solution:
    def solve(self, nums):
        if not nums:
            return 0
        asc = sorted(set(nums))
        diffs = (b - a for a, b in zip(asc, asc[1:]))
        return max((sum(1 for _ in g) for k, g in it.groupby(diffs) if k == 1), default=0) + 1
