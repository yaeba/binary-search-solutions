from collections import Counter


class Solution:
    def solve(self, nums):
        counts = Counter(nums)
        return [num for num in nums if counts[num] == 1]
