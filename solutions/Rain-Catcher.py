class Solution:
    def solve(self, nums):
        size = len(nums)
        prefixMax = []
        suffixMax = []
        for i in range(size):
            prefixMax.append(nums[i] if not prefixMax else max(nums[i], prefixMax[i-1]))
            suffixMax.append(nums[size-i-1] if not suffixMax else max(nums[size-i-1], suffixMax[i-1]))
        suffixMax.reverse()
        return sum(min(l, r) - x for (x, l, r) in zip(nums, prefixMax, suffixMax)
