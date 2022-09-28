from collections import defaultdict


class Solution:
    def solve(self, k, nums):
        counts = defaultdict(int)
        start = res = 0
        for end in range(len(nums)):
            counts[nums[end]] += 1
            while len(counts) > k:
                counts[nums[start]] -= 1
                if counts[nums[start]] == 0:
                    counts.pop(nums[start])
                start += 1
            res = max(res, end - start + 1)

        return res
