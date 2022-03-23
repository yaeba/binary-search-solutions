class Solution:
    def solve(self, nums):
        s = set(nums)
        res = []

        while s:
            lo = hi = s.pop()
            while (lo - 1) in s:
                lo -= 1
                s.remove(lo)
            while (hi + 1) in s:
                hi += 1
                s.remove(hi)
            res.append([lo, hi])

        return sorted(res)
