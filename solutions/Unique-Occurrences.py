class Solution:
    def solve(self, nums):
        v = Counter(nums).values()
        return len(v) == len(set(v))
