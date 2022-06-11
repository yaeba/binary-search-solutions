class Solution:
    def solve(self, nums):
        target = sum(nums) / 2
        if not target.is_integer():
            return False

        ## find if there's a subset that can sum to `target`
        seen = {0}
        for num in nums:
            for partial_sum in list(seen):
                new_sum = partial_sum + num
                if new_sum == target:
                    return True
                seen.add(new_sum)

        return False
