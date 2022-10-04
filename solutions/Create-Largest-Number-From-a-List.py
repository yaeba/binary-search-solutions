import functools


class Solution:
    def solve(self, nums):
        def compare(a, b):
            return 1 if f"{a}{b}" > f"{b}{a}" else -1

        return "".join(map(str, sorted(nums, key=functools.cmp_to_key(compare), reverse=True)))
