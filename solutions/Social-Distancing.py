class Solution:
    def solve(self, s, k):
        ## should have at least (2*k)-1 dots between two "x"s
        ## or should start with at least k dots
        ## or should end with at least k dots
        betweenDots = "." * (2 * k - 1)
        kDots = "." * k
        return s.startswith(kDots) or s.endswith(kDots) or betweenDots in s
