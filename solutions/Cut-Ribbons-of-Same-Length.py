class Solution:
    def solve(self, ribbons, k):
        def condition(value):
            return sum(x // value for x in ribbons) >= k

        left, right = 0, max(ribbons)
        while left < right:
            mid = (left + right) // 2 + 1
            if condition(mid):
                left = mid
            else:
                right = mid - 1

        return left if left else -1
