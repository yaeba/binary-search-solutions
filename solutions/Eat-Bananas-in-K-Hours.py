import math


class Solution:
    def solve(self, piles, k):
        def can_do(r):
            return sum(math.ceil(x / r) for x in piles) <= k

        ## standard binary search
        ## res is in range [1, max(piles)]
        lo, hi = 1, max(piles)
        while lo < hi:
            mid = lo + (hi - lo) // 2
            if can_do(mid):
                hi = mid
            else:
                lo = mid + 1

        return lo
