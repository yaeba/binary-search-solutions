class Solution:
    def solve(self, fractions):
        import math

        res = []
        for (num, denom) in fractions:
            gcd = math.gcd(num, denom)
            res.append((num / gcd, denom / gcd))

        return sorted(set(res), key=lambda x: x[0] / x[1])
