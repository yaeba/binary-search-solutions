class Solution:
    def solve(self, nums):
        size = len(nums)
        if size == 1:
            return True

        diffs = set([nums[i] - nums[i - 1] for i in range(1, size)])
        return (
            diffs == {1}
            or diffs == {-1}
            or diffs == {1, -(size - 1)}
            or diffs == {-1, size - 1}
        )
