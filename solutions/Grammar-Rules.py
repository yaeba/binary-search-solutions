class Solution:
    def solve(self, n):
        MOD = 10 ** 9 + 7
        a = e = i = o = u = 1

        for _ in range(2, n + 1):
            a, e, i, o, u = (e, a + i, a + e + o + u, i + u, a)

        return (a + e + i + o + u) % MOD
