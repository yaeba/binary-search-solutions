import itertools as it


class Solution:
    def solve(self, nums, k, target):
        target *= k
        prefix_sum = list(it.accumulate([0] + nums))

        return sum(
            prefix_sum[i] - prefix_sum[i - k] >= target
            for i in range(k - 1, len(prefix_sum))
        )
