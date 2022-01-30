import itertools as it


class Solution:
    def solve(self, n):
        def helper(s, k):
            if k == n:
                return s
            say = "".join(
                [str(sum(1 for _ in group)) + x for x, group in it.groupby(s)]
            )
            return helper(say, k + 1)

        return helper("1", 1)
