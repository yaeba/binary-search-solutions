class Solution:
    def solve(self, nums):
        sortedNums = sorted(nums)
        return min(
            sum([abs(x - y) for (x, y) in zip(nums, sortedNums)]),
            sum([abs(x - y) for (x, y) in zip(nums, sortedNums[::-1])]),
        )
