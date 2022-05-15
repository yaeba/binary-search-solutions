from collections import Counter


class Solution:
    def solve(self, nums, k):
        # first window
        counts = Counter(nums[:k])
        res = [len(counts)]

        # second window and onwards
        for i in range(len(nums) - k):
            pop, add = nums[i], nums[i + k]
            counts[pop] -= 1
            counts[add] += 1
            if counts[pop] == 0:
                counts.pop(pop)
            res.append(len(counts))

        return res
