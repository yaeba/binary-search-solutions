class Solution:
    def solve(self, nums):
        from collections import Counter
        half = (len(nums) + 1) // 2
        counts = sorted(Counter(nums).values(), reverse=True)
        acc = 0
        for i, c in enumerate(counts):
            acc += c
            if acc >= half:
                return i + 1
        return None
