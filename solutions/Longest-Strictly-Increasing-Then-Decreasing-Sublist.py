import itertools as it


class Solution:
    def solve(self, nums):
        def get_sign(x):
            return 0 if not x else x / abs(x)

        diffs = [b - a for a, b in zip(nums, nums[1:])]
        grouped = [(sign, sum(1 for _ in group)) for sign, group in it.groupby(diffs, key=get_sign)]

        res = 0
        for (d1, n1), (d2, n2) in zip(grouped, grouped[1:]):
            if not (d1 == 1 and d2 == -1):
                continue
            res = max(res, n1 + n2 + 1)

        return res
