class Solution:
    def two_sum(self, nums, k):
        wanted = set()
        for num in nums:
            comp = k - num
            if comp in wanted:
                return True
            wanted.add(num)
        return False

    def solve(self, nums, k, n=4):
        if len(nums) < n:
            return False
        elif n == 2:
            return self.two_sum(nums, k)
        else:
            return any(self.solve(nums[:i] + nums[i + 1 :], k - nums[i], n - 1) for i in range(len(nums)))
