import itertools as it


class Solution:
    def solve(self, nums):
        prefix_sums = list(it.accumulate(nums, initial=0))
        last_seen = {}
        res, start = 0, 0

        for idx, num in enumerate(nums):
            if num in last_seen:
                start = max(start, last_seen[num] + 1)
            last_seen[num] = idx
            res = max(res, prefix_sums[idx + 1] - prefix_sums[start])

        return res
