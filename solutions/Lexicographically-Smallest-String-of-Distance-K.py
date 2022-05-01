class Solution:
    def solve(self, n, k):
        res = ""
        n -= k

        while n:
            use = min(25, n)
            res += chr(use + ord("a"))
            n -= use
            k -= 1

        return "a" * k + res[::-1]
