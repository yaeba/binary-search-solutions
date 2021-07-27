class Solution:
    def solve(self, nums, k):
        if k <= 0:
            return max(nums) - min(nums)

        # init sliding window from left end
        counts = Counter(nums[k:])
        curr_max, curr_min = max(counts), min(counts)
        res = curr_max - curr_min

        # move sliding window to right
        for i in range(k, len(nums)):
            num_remove = nums[i]
            num_add = nums[i - k]

            # remove right
            counts[num_remove] -= 1
            if counts[num_remove] == 0:
                del counts[num_remove]
            # add left
            counts[num_add] += 1

            if num_remove == curr_max or num_remove == curr_min:
                # need to recalculate
                new_max, new_min = max(counts), min(counts)
                res = min(res, new_max - new_min)
                curr_max = min(curr_max, new_max)
                curr_min = max(curr_min, new_min)

        return res
