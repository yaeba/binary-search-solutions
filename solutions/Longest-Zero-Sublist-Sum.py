import itertools as it


class Solution:
    def solve(self, nums):
        prefix_sum = list(it.accumulate(nums, initial=0))

        seen = {}
        res = 0
        for idx, num in enumerate(prefix_sum):
            if num not in seen:
                seen[num] = idx
            res = max(res, idx - seen[num])

        return res
