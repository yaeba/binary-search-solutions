import functools


class Solution:
    def solve(self, weights, values, capacity):
        @functools.cache
        def solveR(idx, cap):
            if cap < 0:
                return float("-inf")
            elif idx >= len(weights) or cap == 0:
                return 0
            include = values[idx] + solveR(idx + 1, cap - weights[idx])
            exclude = solveR(idx + 1, cap)
            return max(include, exclude)

        return solveR(0, capacity)
