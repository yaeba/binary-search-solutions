import functools


class Solution:
    def solve(self, nums, k):
        # similar to 0-1 Knapsack, two choices at every
        # step are to either include or exclude the item
        mod = 10 ** 9 + 7

        @functools.cache
        def solveR(idx, sub_sum):
            if idx == len(nums) or sub_sum >= k:
                return int(sub_sum == k)
            include = solveR(idx + 1, sub_sum + nums[idx])
            exclude = solveR(idx + 1, sub_sum)
            return (include + exclude) % mod

        return solveR(0, 0)
