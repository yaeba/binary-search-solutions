class Solution:
    def solve(self, nums, diff):
        seen = {}
        for num in nums:
            seen[num] = seen.get(num - diff, 0) + 1

        return max(seen.values(), default=0)
