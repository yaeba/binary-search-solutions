class Solution:
    def solve(self, nums, target):
        return Counter(nums) == Counter(target)
