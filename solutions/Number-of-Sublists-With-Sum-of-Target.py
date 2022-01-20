class Solution:
    def solve(self, nums, target):
        from collections import defaultdict

        running = res = 0
        cache = defaultdict(int)
        cache[0] += 1
        for n in nums:
            running += n
            res += cache[running - target]
            cache[running] += 1
        return res
