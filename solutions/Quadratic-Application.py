class Solution:
    def solve(self, nums, a, b, c):
        import functools

        res = []

        @functools.cache
        def f(x):
            return a * x ** 2 + b * x + c

        left, right = 0, len(nums) - 1
        while left <= right:
            y_left = f(nums[left])
            y_right = f(nums[right])
            if (a <= 0 and y_left < y_right) or (a > 0 and y_left > y_right):
                # if concave, store min(y_left, y_right)
                # else if convex, store max(y_left, y_right) and reverse at end
                res.append(y_left)
                left += 1
            else:
                res.append(y_right)
                right -= 1
        return res if a <= 0 else res[::-1]
