class Solution:
    def solve(self, nums):
        # use a monotonic stack to store increasing nums
        stack = []
        res = 0
        for num in nums:
            while stack and stack[-1] > num:
                # pop until we can store this num
                stack.pop()
            stack.append(num)
            res += len(stack)

        return res
