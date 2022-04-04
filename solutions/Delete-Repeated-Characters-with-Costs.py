import itertools as it


class Solution:
    def solve(self, s, nums):
        total_cost = sum(nums)
        remaining_cost = sum(
            max(cost for _, cost in group) for _, group in it.groupby(zip(s, nums), key=lambda x: x[0])
        )
        return total_cost - remaining_cost
