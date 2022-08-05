class Solution:
    def solve(self, nums):
        win = False
        stack = []

        for num in nums:
            if stack and num == stack[-1]:
                stack.pop()
                win = not win
            else:
                stack.append(num)

        return win
