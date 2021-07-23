class Solution:
    def solve(self, nums):
        for (i, n) in enumerate(nums):
            try:
                if n < nums[2 * i + 1] or n < nums[2 * i + 2]:
                    return False
            except:
                continue
        return True
