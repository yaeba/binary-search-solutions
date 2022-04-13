class Solution:
    def solve(self, s, t):
        s, t = sorted(s), sorted(t)
        return all(x <= y for x, y in zip(s, t)) or all(x >= y for x, y in zip(s, t))
