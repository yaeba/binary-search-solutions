import functools


class Solution:
    @functools.cache
    def solve(self, s):
        l = len(s)
        if l <= 1:
            return 1

        return sum(self.solve(s[i:]) for i in range(1, l + 1) if s[:i] == s[:i][::-1])
