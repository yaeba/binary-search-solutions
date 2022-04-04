import functools


class Solution:
    def solve(self, prices, n):
        @functools.cache
        def solveR(n):
            return max(prices[i - 1] + solveR(n - i) for i in range(1, n + 1)) if n else 0

        return solveR(n)
