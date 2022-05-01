class Solution:
    def solve(self, s):
        # compute unique characters in prefix and suffix
        uniq = set()
        prefix = [len((uniq := uniq | {x})) for x in s[:-1]]
        uniq.clear()
        suffix = [len((uniq := uniq | {x})) for x in s[:0:-1]]

        return sum(a == b for a, b in zip(prefix, suffix[::-1]))
