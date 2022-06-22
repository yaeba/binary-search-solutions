from collections import Counter


class Solution:
    def solve(self, nums):
        counts = Counter(nums)
        return sum(idx * counts[x] for idx, x in enumerate(sorted(counts)))