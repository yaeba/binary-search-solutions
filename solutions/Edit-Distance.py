import functools


class Solution:
    def solve(self, a, b):
        @functools.cache
        def solveR(i, j):
            if i == 0 or j == 0:
                return i + j
            elif a[i - 1] == b[j - 1]:
                return solveR(i - 1, j - 1)
            else:
                return 1 + min(solveR(i - 1, j - 1), solveR(i - 1, j), solveR(i, j - 1))

        return solveR(len(a), len(b))
