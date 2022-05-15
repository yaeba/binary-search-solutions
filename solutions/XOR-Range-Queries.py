import itertools as it


class Solution:
    def solve(self, nums, queries):
        # use idea of prefix sum
        xor_func = lambda x, y: x ^ y
        prefix_arr = [0] + list(it.accumulate(nums, xor_func))

        return [prefix_arr[b + 1] ^ prefix_arr[a] for a, b in queries]
