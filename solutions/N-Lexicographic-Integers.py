class Solution:
    def solve(self, n):
        # one-liner
        # return sorted(range(1, n + 1), key=str)

        # or using recursion
        res = []

        def solve_recursive(x):
            nonlocal res
            if x > n:
                return
            res.append(x)
            solve_recursive(x * 10)
            for i in range(1, 10):
                solve_recursive(x * 10 + i)

        for x in range(1, min(10, n + 1)):
            solve_recursive(x)
        return res
