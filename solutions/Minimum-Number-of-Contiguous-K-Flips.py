class Solution:
    def solve(self, nums, k):
        size = len(nums)
        flipped = set()
        delta = res = 0

        for idx, num in enumerate(nums):
            delta -= idx >= k and (idx - k) in flipped

            if (num + delta) % 2 == 0:
                # no need to flip
                continue
            elif idx + k > size:
                # cant flip anymore
                return -1
            else:
                # flip
                res += 1
                delta += 1
                flipped.add(idx)

        return res
