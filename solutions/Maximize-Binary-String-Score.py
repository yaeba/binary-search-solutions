class Solution:
    def solve(self, s):
        from itertools import accumulate

        ## calculate prefix sum of 0s and 1s (in reverse)
        ## eg    s  = "001011"
        ##    zeros = "122333"
        ##     ones = "333221"
        zeros = list(accumulate(1 if x == "0" else 0 for x in s))
        ones = list(accumulate(1 if x == "1" else 0 for x in s[::-1]))[::-1]
        ## exclude head(ones) and tail(zeros), since parts must be non-empty
        return max(a + b for a, b in zip(zeros[:-1], ones[1:]))
