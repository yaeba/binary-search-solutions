from bisect import bisect_left


class Solution:
    def solve(self, matrix):
        colsums = [sum(col) for col in zip(*matrix)]
        if any(colsums):
            return bisect_left(colsums, 1)
        return -1
