class Solution:
    def solve(self, n):
        fibs = [0, 1]
        while fibs[-1] + fibs[-2] <= n:
            fibs.append(fibs[-1] + fibs[-2])

        res = 0
        while n:
            res += 1
            n -= fibs[-1]
            while fibs[-1] > n:
                fibs.pop()

        return res
