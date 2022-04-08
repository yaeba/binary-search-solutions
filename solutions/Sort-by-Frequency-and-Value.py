from collections import Counter


class Solution:
    def solve(self, nums):
        return [num for num, freq in sorted(Counter(nums).items(), key=lambda x: (-x[1], -x[0])) for _ in range(freq)]
