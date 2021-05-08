class Solution:
    def solve(self, nums):
        return sum([n * (n - 1) / 2 for n in Counter(nums).values()])
