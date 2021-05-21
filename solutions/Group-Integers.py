class Solution:
    def solve(self, nums):
        counts = set(Counter(nums).values())

        if 1 in counts:
            return False
        elif len(counts) == 1:
            return True
        else:
            g = functools.reduce(math.gcd, counts)
            return g != 1
