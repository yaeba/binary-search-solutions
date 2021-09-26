class Solution:
    def solve(self, items, n):
        from collections import Counter
        import itertools as it

        counts = sorted(Counter(items).values())
        return sum(1 for x in it.accumulate(counts) if x > n)
