from itertools import accumulate


class Solution:
    def solve(self, nums, k):
        # calculate the following
        # eg nums        = [1,1,1,-5,3,3,3,-7,2,2,2], k = 3
        # sublist_sum    = [3,-3,-1,1,9,-1,-2,-3,6]
        # left_max_seen  = [3, 3, 3,3,9, 9, 9, 9,9]
        # right_max_seen = [9, 9, 9,9,9, 6, 6, 6,6]
        prefix_sum = list(accumulate(nums, initial=0))
        sublist_sum = [prefix_sum[i] - prefix_sum[i - k] for i in range(k, len(nums) + 1)]

        left_max_seen_sum = list(accumulate(sublist_sum, max))
        right_max_seen_sum = list(accumulate(sublist_sum[::-1], max))[::-1]

        return max(
            left_max_seen_sum[i - k] + sublist_sum[i] + right_max_seen_sum[i + k]
            for i in range(k, len(sublist_sum) - k)
        )
