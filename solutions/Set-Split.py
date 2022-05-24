class Solution:
    def solve(self, nums):
        nums.sort()
        left_sum = 0
        right_sum = sum(nums)

        for curr_num, next_sum in zip(nums, nums[1:]):
            left_sum += curr_num
            right_sum -= curr_num
            if left_sum == right_sum and curr_num < next_sum:
                return True

        return False
