class Solution:
    def solve(self, prices):
        # use a monotonic stack to store decreasing nums
        stack = []
        res = [0] * len(prices)

        for idx, price in enumerate(prices):
            while stack and prices[stack[-1]] < price:
                last = stack.pop()
                res[last] = idx - last

            stack.append(idx)

        return res
