import itertools as it


class Solution:
    def solve(self, s, shifts):
        def f(c, i):
            idx = ord(c) - ord("a") + i
            return chr(idx % 26 + ord("a"))

        shifts = list(it.accumulate(shifts[::-1]))[::-1]

        return "".join(f(char, shift) for char, shift in zip(s, shifts))
