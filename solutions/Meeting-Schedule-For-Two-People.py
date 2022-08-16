class Solution:
    def solve(self, a, b, duration):
        def solveR(x, y):
            if not x or not y:
                return []
            [x1, x2], [y1, y2] = x[0], y[0]
            if min(x2, y2) - max(x1, y1) >= duration:
                return [max(x1, y1), max(x1, y1) + duration]
            elif x2 < y2:
                return solveR(x[1:], y)
            else:
                return solveR(x, y[1:])

        return solveR(sorted(a), sorted(b))
