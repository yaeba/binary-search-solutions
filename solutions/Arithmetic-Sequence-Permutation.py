class Solution:
    def solve(self, nums):
        sNums = sorted(nums)
        return len(set([y - x for (x, y) in zip(sNums, sNums[1:])])) == 1
