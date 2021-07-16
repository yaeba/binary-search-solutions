class Solution:
    def solve(self, nums):
        d = {}

        for (idx, num) in enumerate(nums):
            if num not in d:
                d[num] = (-1, 1, idx)  # (-count, len, start)
            else:
                (count, _, start) = d[num]
                d[num] = (count - 1, idx - start + 1, start)

        return min(d.values())[1]
