import functools


class Solution:
    def solve(self, s, k):
        n = len(s)

        @functools.cache
        def cost(left, right):
            if left >= right:
                # odd length palindrome
                return 0
            else:
                return (s[left] != s[right]) + cost(left + 1, right - 1)

        @functools.cache
        def dp(left, k):
            if n - k < left:
                return float("inf")
            elif k == 1:
                return cost(left, n - 1)

            # partition and repeat
            return min(cost(left, right) + dp(right + 1, k - 1) for right in range(left, n))

        return dp(0, k)
