class Solution:
    def solve(self, s):
        # given string composed of 1 unique character
        # total number of substrings if
        # len(s) = 1 => 1 = 1
        #          2 => 3 = 1 + 2
        #          3 => 6 = 1 + 2 + 3
        #          4 => 10 = 1 + 2 + 3 + 4
        import itertools as it
        import functools

        l = [sum(1 for _ in group) for _, group in it.groupby(s)]
        return functools.reduce(lambda l, r: l + r / 2 * (r + 1), l, 0)
