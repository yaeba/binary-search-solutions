class Solution:
    def solve(self, nums):
        # use a monotonic stack to store decreasing nums
        stack = []
        res = [-1] * len(nums)

        for idx, num in enumerate(nums * 2):
            while stack and nums[stack[-1]] < num:
                # pop until we can store this num
                # for each popped, set result to this num
                # as this is the first num > popped
                res[stack.pop()] = num

            if idx < len(nums):
                stack.append(idx)

        return res
