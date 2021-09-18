import itertools


class Solution:
    def solve(self, s):
        ## if s is a string of length l and contains only identical characters
        ## then minimum n_operations to have no instances of 3 identical
        ## consecutive characters is
        ## l < 3, n = 0
        ## 3 <= l < 6, n = 1
        ## 6 <= l < 9, n = 2
        counts = [len(list(group)) for _, group in itertools.groupby(s)]
        return sum(n // 3 for n in counts)
