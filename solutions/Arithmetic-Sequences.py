class Solution:
    def solve(self, nums):
        d = [y - x for x, y in zip(nums, nums[1:])]
        l = [sum(1 for _ in group) - 1 for _, group in itertools.groupby(d)]
        return sum(n * (n + 1) / 2 for n in l if n)
