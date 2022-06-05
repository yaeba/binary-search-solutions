class Solution:
    def solve(self, nums):
        if not nums:
            return 0

        dp = [0, nums[0]]
        # let dp[i+1] be the min time if we include nums[i]
        for num in nums[1:]:
            dp.append(num + min(dp[-1], dp[-2]))

        return min(dp[-1], dp[-2])
