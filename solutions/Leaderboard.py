class Solution:
    def solve(self, nums):
        idxDict = {n: i for (i, n) in enumerate(sorted(set(nums), reverse=True))}
        return [idxDict[n] for n in nums]
