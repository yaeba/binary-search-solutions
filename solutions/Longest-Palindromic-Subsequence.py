import functools


class Solution:
    def solve(self, s):
        @functools.cache
        def dp(left, right):
            if left >= right:
                # 1 if it is odd length palindrome
                return int(left == right)
            elif s[left] == s[right]:
                return dp(left + 1, right - 1) + 2
            else:
                return max(dp(left + 1, right), dp(left, right - 1))

        return dp(0, len(s) - 1)
