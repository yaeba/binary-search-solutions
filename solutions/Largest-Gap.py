class Solution:
    def solve(self, nums):
        length = len(nums)
        if length <= 1:
            return 0
        else:
            sortedNums = sorted(nums)
            return max([sortedNums[i + 1] - sortedNums[i] for i in range(length - 1)])
