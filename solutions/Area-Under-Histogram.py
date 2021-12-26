class Solution:
    def solve(self, nums):
        res = 0
        nums = [-1] + nums + [-1]
        stack = [0]

        for i in range(len(nums)):
            while nums[i] < nums[stack[-1]]:
                h = nums[stack.pop()]
                area = h * (i - stack[-1] - 1)
                res = max(res, area)
            stack.append(i)
        return res
